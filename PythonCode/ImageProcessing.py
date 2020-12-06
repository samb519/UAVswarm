import airsim
import cv2
import os
import numpy as np
from imutils import paths
import imutils
import matplotlib.pyplot as plt
import math

# Global testing variables
droneNum = 3
focalLength = 131.92
droneWidth = 0.44
# initialPositions = np.array([[2,0,-2],[4,0,-2],[6,0,-2]])
VEHICLENAME = "UAV"


def connectToUnreal():
    # initializing AirSim Simulator
    tempClient = airsim.MultirotorClient()
    tempClient.confirmConnection()
    return tempClient


def getLocalPosition(client, droneNum, droneNames):

        name = "".join(map(str, droneNames[0]))
        imgs = client.simGetImages([
            airsim.ImageRequest("0", airsim.ImageType.Scene, False, False)], vehicle_name=name)
        # Scene vision image in uncompressed RGBA array
        img = imgs[0]

        if i == 0:
            imgArray = img.image_data_uint8
        else:
            imgArray = imgArray + img.image_data_uint8

        imgWidth = img.width
        imgHeight = img.height


        response = imgs[0]

        # get numpy array
        img1d = np.fromstring(response.image_data_uint8, dtype=np.uint8)

        # reshape array to 4 channel image array H X W X 4
        img_rgb = img1d.reshape(response.height, response.width, 3)

        image = img_rgb

        # convert the image to grayscale, blur it, and detect edges
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        gray = cv2.GaussianBlur(gray, (5, 5), 0)
        edged = cv2.Canny(gray, 35, 125)
        # find the contours in the edged image and keep the largest one;
        # we'll assume that this is our piece of paper in the image
        cnts = cv2.findContours(edged.copy(), cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)
        cnts = imutils.grab_contours(cnts)

        counter = 1;

        while len(cnts) == 0 and counter <= 8:
            imgs = client.simGetImages([
                airsim.ImageRequest(str(counter), airsim.ImageType.Scene, False, False)], vehicle_name=name)

            response = imgs[0]

            # get numpy array
            img1d = np.fromstring(response.image_data_uint8, dtype=np.uint8)

            # reshape array to 4 channel image array H X W X 4
            img_rgb = img1d.reshape(response.height, response.width, 3)

            if i == 0:
                imgArray = img.image_data_uint8
            else:
                imgArray = imgArray + img.image_data_uint8

            image = img_rgb

            # convert the image to grayscale, blur it, and detect edges
            gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
            gray = cv2.GaussianBlur(gray, (5, 5), 0)
            edged = cv2.Canny(gray, 35, 125)

            # find the contours in the edged image and keep the largest one;

            cnts = cv2.findContours(edged.copy(), cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)
            cnts = imutils.grab_contours(cnts)

            counter += counter
        c = max(cnts, key = cv2.contourArea)
        # compute the bounding box of the of the paper region and return it
        rresult = cv2.minAreaRect(c)

        (x, y, w, h) = cv2.boundingRect(cnts[0])  # assuming, there is

        pt = (x, y + h)  # bottom-left of the obj
        orig = (img_rgb.shape[1], img_rgb.shape[0]);  ## bottom-right of the img

        dist = math.sqrt((pt[0] - orig[0]) ** 2 + (pt[1] - orig[1]) ** 2)


        cv2.imwrite("contoured.png",edged)
        cv2.waitKey(0)

        inches = (droneWidth * focalLength) / rresult[1][0]

        box = cv2.cv.BoxPoints(rresult) if imutils.is_cv2() else cv2.boxPoints(rresult)
        box = np.int0(box)
        cv2.drawContours(image, [box], -1, (0, 255, 0), 2)
        cv2.putText(image, "%.2fft" % (inches/ 12),
                    (image.shape[1] - 200, image.shape[0] - 20), cv2.FONT_HERSHEY_SIMPLEX,
                    2.0, (0, 255, 0), 3)
        cv2.waitKey(0)

        numpyVector = np.array(inches/12)

        return numpyVector




