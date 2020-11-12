import airsim
import cv2
import os
import numpy as np
from imutils import paths
import imutils
import MoveToFormationPos
import Takeoff
import Drone

#formation calculations needed for x, y, a, b

drones = Takeoff.getDrones()
forceConstraint = 0;

for drone in drones:
	#calculations here to set variables
	MoveToFormationPos.MoveSingleDrone(drone, x, y, a, b)

def getMovementForce(drones, id):
	sumOfForces = np.array([0, 0, 0])

	for i in range(0, len(drones)):
		if drones[i].id == id:
			continue
		relativePos = np.subtract(drones[i].getPosition(), drones[id].getPosition())
		forceMagnitude = forceConstraint * drone[i].mass * drone[id].mass / np.multiply(relativePos, relativePos)
		forceDirection = np.linalg.norm(forceMagnitude)
		trueForce = np.multiply(forceMagnitude, forceDirection)
		sumOfForces = np.add(sumOfForces, trueForce)

	return sumOfForces



