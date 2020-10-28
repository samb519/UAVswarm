import airsim
import cv2
import os
import numpy as np
from imutils import paths
import imutils
import MoveToFormationPos
import Takeoff

#formation calculations needed for x, y, a, b

drones = Takeoff.getDrones()

for drone in drones:
	#calculations here to set variables
	MoveToFormationPos.MoveSingleDrone(drone, x, y, a, b)

