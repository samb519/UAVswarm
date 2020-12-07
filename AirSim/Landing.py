import airsim
import cv2
import os
import numpy as np
from imutils import paths
import imutils
import Takeoff

drones = Takeoff.getDrones()

for drone in drones:
    if airsim.LandedState.Landed != drone.getMultirotorState().landed_state:
        drone.landAsync().join()
    drone.armDisarm(False)
    drone.enableApiControl(False)



