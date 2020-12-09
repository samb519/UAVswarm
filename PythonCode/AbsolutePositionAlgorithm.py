import airsim
import cv2
import os
import numpy as np
from imutils import paths
import imutils
import Drone

desiredPositioning = [[0, 0, 0],
					  [0, 0, 0],
					  [0, 0, 0]]

desiredLocalPositioning = {}

def setDesireLocationForDrone(drone, vector):
	for drone in droneArray:
		if drone.id not in desiredLocalPositioning:
			desiredLocalPositioning(drone.id) = drone.position

	
