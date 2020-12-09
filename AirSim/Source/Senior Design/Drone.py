import airsim
import cv2
import os
import numpy as np
from imutils import paths
import imutils
import MoveToFormationPos
import MasterDrone
import AbsolutePositionAlgorithm
import ForceControlAlgorithm

class Drone:
	position = [0, 0, 0]

	def __init__(self, id, name, mass,client):

		self.id = id
		self.name = name
		self.mass = mass
		self.drone = airsim.MultirotorClient();
		client.enableApiControl(True, droneName)
		client.armDisarm(True, droneName)
		client.takeoffAsync(vehicle_name=name).join()



	def sendImageToMaster():


	def sendGlobalPositionToMaster():
		return position

	#drone, drone, vector
	def setDronePosition(originDrone, targetDrone, position):
		AbsolutePositionAlgorithm.addDronesToDict(MasterDrone.getChildren())

	#vector
	def moveDrone(location):
		self.drone.moveToPosition(location[0], location[1], location[2]).join()

	#float
	def tick(deltaSeconds):

