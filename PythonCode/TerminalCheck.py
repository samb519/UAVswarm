# -*- coding: utf-8 -*-
"""
Created on Mon Nov  9 15:28:54 2020

@author: forni
"""

def checkInt(value):
        isValid = isinstance(value,(int))
        if(not isValid):
            raise TypeError("Must be an integer value")
        return isValid
    
def checkAddDrone(droneSize,xPos,yPos,zPos): 
        isValid = checkInt(xPos)
        if(isValid):
            isValid = checkInt(yPos)
        if(isValid):
            isValid = checkInt(zPos)
        if(droneSize >= 10):
            raise TypeError("Can only have up to 10 drones")
            isValid = False
        return isValid
    
def checkRemoveDrone(droneIndex,droneSize):
        isValid = checkInt(droneIndex)
        if(isValid):  
            if(droneSize <= 0):
                  raise TypeError("Cannot have less than 1 drone")
                  isValid = False
            if(droneIndex > droneSize):
                  raise TypeError("Index is out of bounds")
                  isValid = False
        return isValid
    
def checkDistrSize(distrAmount):
        isValid = checkInt(distrAmount)
        return isValid
            

                        
            
    