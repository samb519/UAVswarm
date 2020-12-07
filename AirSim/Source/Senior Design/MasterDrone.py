import airsim
import cv2
import os
import numpy as np
from imutils import paths
import imutils
import MoveToFormationPos
import ImageProcessing

class MasterDrone:
	mass = 20
	viewFromDrone = bytearray()
	childDrones = []
	droneGlobalPos = [0, 0, 0]

	def __init__(self):

	#drone
	def enrollChildDrone(child):
		childDrones.append(child)

	#byte[], drone
	def recieveImage(image, drone):

	#vector
	def recieveGlobalPosition(position):
		droneGlobalPos = position

	def getChildren():
		return childDrones

