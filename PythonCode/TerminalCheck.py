# -*- coding: utf-8 -*-
"""
Created on Mon Nov  9 15:28:54 2020

@author: forni
"""

def checkNum(value):
    
        isValid = True
        if(not((isinstance(value,(float))) or (isinstance(value,(int))))):
            raise TypeError("Must be an number value")
            isValid = False;
        return isValid
    
def checkAddDrone(droneSize,xPos,yPos,zPos): 
        isValid = checkNum(xPos)
        if(isValid):
            isValid = checkNum(yPos)
        if(isValid):
            isValid = checkNum(zPos)
        if(droneSize >= 10):
            raise TypeError("Can only have up to 10 drones")
            isValid = False
        return isValid
    
def checkRemoveDrone(droneIndex,droneSize):
        isValid = checkNum(droneIndex)
        if(isValid):  
            if(droneSize <= 0):
                  raise TypeError("Cannot have less than 1 drone")
                  isValid = False
            if(droneIndex > droneSize):
                  raise TypeError("Index is out of bounds")
                  isValid = False
        return isValid
    
def checkDistrSize(distrAmount):
        isValid = checkNum(distrAmount)
        return isValid
            

                        
            
    