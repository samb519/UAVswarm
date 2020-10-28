# -*- coding: utf-8 -*-
"""
Created on Wed Oct 28 13:21:15 2020

"""
from ImageProcessing import connectToUnreal,initalizeDrone
from ModifySettings import findNumofVehiclesStartUp, getVehiclesStartUp

def __StartUp():
    client = connectToUnreal()
    numDrones = findNumofVehiclesStartUp()
    droneNames = getVehiclesStartUp()
    initalizeDrone(client,numDrones,droneNames)
    
__StartUp()