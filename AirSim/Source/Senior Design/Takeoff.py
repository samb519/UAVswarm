import airsim
import cv2
import os
import numpy as np
from imutils import paths
import imutils

#Set number and starting height (relative to ground) from UI
droneNum = 0
height = 0

drones = []

for i in range(droneNum):
    drones.append(airsim.MultirotorClient())
    drones[droneNum].confirmConnection()
    drones[droneNum].enableApiControl(True)
    drones[droneNum].armDisarm(True)
    drones[droneNum].takeoffAsync().join()
    drones[droneNum].moveToPositionAsync(0, 0, 0, height).join() #set dynamically from drone formation calculations

def getDrones():
    return drones 

