# -*- coding: utf-8 -*-
"""
Created on Wed Oct 28 13:21:15 2020

"""
import ImageProcessing
from ModifySettings import getVehicles
import Drone

def __StartUp():
    client = ImageProcessing.connectToUnreal()
    
    droneNames = getVehicles();
    numDrones = len(droneNames)

    drone = Drone(self, id, droneNames[0], mass,client)



    



__StartUp()