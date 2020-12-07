class Drone:

	def __init__(self, id, name, mass, client, controlAlgorithm):
		self.id = id
		self.name = name
		self.mass = mass
		self.drone = client
		self.position = [0, 0, 0]
		self.controlAlgorithm = controlAlgorithm

		self.drone.enableApiControl(True, self.name)
		self.drone.armDisarm(True, self.name)
		self.drone.takeoffAsync(vehicle_name=self.name).join()

	def sendGlobalPositionToMaster(self):
		return self.position

	#drone, drone, vector
	def setDronePosition(self, originDrone, targetDrone, position):
		AbsolutePositionAlgorithm.addDronesToDict(MasterDrone.getChildren())

	def getControlAlgorithm(self):
		return self.controlAlgorithm

	#vector
	def moveDrone(self, location):
		self.drone.moveByVelocityAsync(location[0], location[1], location[2], 1, vehicle_name=self.name).join()
