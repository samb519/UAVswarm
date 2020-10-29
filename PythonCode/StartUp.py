# -*- coding: utf-8 -*-
"""
Created on Wed Oct 28 13:21:15 2020

"""
from ImageProcessing import connectToUnreal,initalizeDrone
from ModifySettings import getVehiclesStartUp

def __StartUp():
    client = connectToUnreal()
    
    droneNames = getVehiclesStartUp()
    numDrones = len(droneNames)
    
    initalizeDrone(client,numDrones,droneNames)
    
__StartUp()