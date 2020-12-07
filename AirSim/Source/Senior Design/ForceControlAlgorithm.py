import airsim
import cv2
import os
import numpy as np
from imutils import paths
import imutils

attractiveForceStrength = 0
replusiveForceStrength = 0

def computeMovementForce(droneOne, droneTwo):
	relativePos = droneOne.position - droneTwo.position
	distance = np.linalg.norm(relativePos)
	forceMagnitude = attracticeForceStrength * droneOne.mass * droneTwo.mass / (distance * distance)
	forceDirection = np.linalg.norm(distance)
	movementForce = forceMagnitude * forceDirection
	return movementForce

