# -*- coding: utf-8 -*-
"""
Created on Tue Oct 27 22:33:27 2020

"""
import json
import random
import TerminalCheck as tCheck

#Constants
VEHICLESDIC = "Vehicles"
VEHICLENAME = "UAV"
PATH = r'P:\\GitHub\UAVswarm\\-Documents-AirSim\\settings.json'
JSONINDENT = 4

def __loadData():
    with open(PATH) as f:
        data = json.load(f)
    return data   

def getVehicles():    
    index = 0    
    for dataVehi in data[VEHICLESDIC]:
        index = index+1
    
    uavNumArray = [None] * index
    
    index = 0
    for dataVehi in data[VEHICLESDIC]:
        uavNumArray[index] = [dataVehi]
        index = index+1
    return uavNumArray      
       
def addDrone(xPos,yPos,zPos):
    vehicLen = len(getVehicles())
    isValid = tCheck.checkAddDrone(vehicLen,xPos,yPos,zPos)
    
    if(isValid):
        vehicleNewName = VEHICLENAME + str((vehicLen)+random.randint(0, 1000)) 
        vehiType = {vehicleNewName:{"VehicleType": "SimpleFLight", "X" : xPos, "Y": yPos, "Z": zPos}}  
        #Get the original data
        vehicleDic = data[VEHICLESDIC]
        #Append the new data
        vehicleDic.update(vehiType)
        #Append it to the rest of the data
        data[VEHICLESDIC].update(vehicleDic)
        __writeData()
        print("Drone has been added")

def removeDrone(indexRemove):
    vehicleArr = getVehicles()
    isValid = tCheck.checkRemoveDrone(indexRemove,len(vehicleArr))
    
    if(isValid):    
        #Get the original data as a copy
        vehicleDic = data[VEHICLESDIC]
        #Convert the list to string
        vehicleRemove = "".join(map(str,vehicleArr[indexRemove]))
        #Delete the vehicle from the copy
        del vehicleDic[vehicleRemove]
        #Delete the entire vehicle key and value from the original data
        del data[VEHICLESDIC]
        #Add it back using the copy with the removed data
        data[VEHICLESDIC] = vehicleDic
        __writeData()
        print("Drone has been removed")
    
def __writeData():
      with open(PATH,'w') as f: 
        json.dump(data, f, indent=JSONINDENT) 

def displayDrones():
  data = __loadData()
  print(data[VEHICLESDIC])

#Initalize the data
data = __loadData()