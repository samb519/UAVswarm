import airsim
import cv2
import os
import numpy as np
from imutils import paths
import imutils
import MoveToFormationPos
import MasterDrone

class Drone:
	position = [0, 0, 0]

	def __init__(self, id, mass):
		self.id = id
		self.mass = mass	
		self.drone = airsim.MultirotorClient();
    	self.drone.confirmConnection()
    	self.drone.enableApiControl(True)
    	self.drone.armDisarm(True)

    def sendImageToMaster():

	def sendGlobalPositionToMaster():

	def setDronePosition():

	def moveDrone():

	def tick():

