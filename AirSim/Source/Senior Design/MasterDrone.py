import airsim
import cv2
import os
import numpy as np
from imutils import paths
import imutils
import MoveToFormationPos
import ImageProcessing
import Drone

class MasterDrone:
	mass = 20
	viewFromDrone = bytearray()
	childDrones = []
	droneGlobalPos = [0, 0, 0]
	for i in range(10):
		enrollChildDrone(Drone(i, 5))

	def __init__(self):

	#drone
	def enrollChildDrone(child):
		childDrones.append(child)

	#byte[], drone
	def recieveImage(image, drone):

	#vector
	def recieveLocalPosition(droneId, droneName):
		ImageProcessing.getLocalPosition(ImageProcessing.connectToUnreal(), droneId, droneName)

	def getChildren():
		return childDrones

