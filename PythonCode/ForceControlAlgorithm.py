import airsim
import cv2
import os
import numpy as np
from imutils import paths
import imutils


attractiveForceStrength = 0
replusiveForceStrength = 0
class ForceControlAlgorithm:
	def __init__(self, forceStrength):
		self.attractiveForceStrength  = forceStrength

	def computeMovementForce(self, droneOne, droneTwo):
		relativePos = droneOne.position - droneTwo.position
		distance = np.linalg.norm(relativePos)
		forceMagnitude = self.attractiveForceStrength * droneOne.mass * droneTwo.mass / (distance * distance)
		forceDirection = relativePos / distance
		movementForce = forceMagnitude * forceDirection
		return movementForce

