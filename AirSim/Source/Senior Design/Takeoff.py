import airsim
import cv2
import os
import numpy as np
from imutils import paths
import imutils
import Drone

#Set number and starting height (relative to ground) from UI
droneNum = 0
height = 0

drones = []

for i in range(droneNum):
    drones.append(Drone(i, 10))

def getDrones():
    return drones 

