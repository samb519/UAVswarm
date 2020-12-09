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

	def __init__(self):
		self.mass = 20
		self.viewFromDrone = bytearray()
		self.childDrones = []
		self.droneGlobalPos = [0, 0, 0]
		for i in range(10):
			self.enrollChildDrone(Drone(i, 5, ""))

	#drone
	def enrollChildDrone(self,child):
		self.childDrones.append(child)

	#byte[], drone
	def recieveImage(self,image, drone):
		pass

	#vector
	def recieveLocalPosition(self,droneId, droneName):
		ImageProcessing.getLocalPosition(ImageProcessing.connectToUnreal(), droneId, droneName)

	def getChildren(self):
		return self.childDrones

