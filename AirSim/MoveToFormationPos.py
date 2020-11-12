#this file is for moving to positions in different formations

import airsim
import cv2
import os
import numpy as np
from imutils import paths
import imutils

#get inputs from PositionControl.py

def MoveSingleDrone(drone, x, y, a, b):
	drone.moveToPosition(x, y, a, b).join()

def Land(drone):
	drone.land().join()
	drone.armDisarm(False)
	drone.enableApiControl(False)

