# -*- coding: utf-8 -*-
"""
Created on Tue Oct 27 22:33:27 2020

@author: forni
"""

import json
  
#Constants
VEHICLESDIC = "Vehicles"
VEHICLENAME = "UAV"
PATH = r'P:\\GitHub\UAVswarm\\-Documents-AirSim\\settings.json'
JSONINDENT = 4

def __loadData():
    with open(PATH) as f:
        data = json.load(f)
    return data   

def __findNumofVehicles():
    index = 0    
    for dataVehi in data[VEHICLESDIC]:
        index = index+1
    return index

def __getVehicles():
    uavNumArray = [None] * __findNumofVehicles()
    index = 0
    for dataVehi in data[VEHICLESDIC]:
        uavNumArray[index] = [dataVehi]
        index = index+1
    return uavNumArray      
       
def addVehicleToJson(xPos,yPos,zPos):
    __setData(__loadData())
    vehicleNewName = VEHICLENAME + str((__findNumofVehicles()+1)) 
    vehiType = {vehicleNewName:{"VehicleType": "SimpleFLight", "X" : xPos, "Y": yPos, "Z": zPos}}  
    
    #Get the original data
    vehicleDic = data[VEHICLESDIC]
    #Append the new data
    vehicleDic.update(vehiType)
    #Append it to the rest of the data
    data[VEHICLESDIC].update(vehicleDic)
    __writeData()

def removeVehicle(indexRemove):
    vehicleArr = __getVehicles()
    
    #Get the original data copy
    vehicleDic = data[VEHICLESDIC]
    #Convert the list to string
    vehicleRemove = "".join(map(str,vehicles[indexRemove]))
    #Delete the vehicle from the original data copy
    del vehicleDic[vehicleRemove]
    #Delete the entire vehicle key and value
    del data[VEHICLESDIC]
    #Add it back using the copy with the removed data
    data[VEHICLESDIC] = vehicleDic
    __writeData()
    
def __writeData():
      with open(PATH,'w') as f: 
        json.dump(data, f, indent=JSONINDENT) 

def __getData():
    return data;

def __setData(newData):
    data = newData;

#Initalize the data
data = __loadData()
vehicles =  __getVehicles()
removeVehicle(1)

       
