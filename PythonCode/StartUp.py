# -*- coding: utf-8 -*-
"""
Created on Wed Oct 28 13:21:15 2020

"""
import ImageProcessing
from ModifySettings import getVehicles,getDistribution
from Drone import Drone
import numpy as np
from ForceControlAlgorithm import ForceControlAlgorithm
import time
from datetime import datetime
from OutPutData import addData, HandleLog
positions = {}
def __StartUp():
    mass = 5
    forceStrength = getDistribution()
    print("Starting up");
    client = ImageProcessing.connectToUnreal()
    
    droneNames = getVehicles();
    numDrones = len(droneNames)
    print(droneNames)
    drones = []

    # y,x,z
    initialPositions = np.array([[0, -2, -2], [0, 2, -2], [4, -2, -2]])

    # initializing AirSim Simulator

    
    controller = ForceControlAlgorithm(forceStrength)
    # intializing drones
    print("Beginning Takeoff Sequence")
    for i in range(len(droneNames)):
        drone = Drone(i, droneNames[i], mass, client, controller)
        drones.append(drone)
        positions[drone.name] = np.array([0, 0, 0])
    time.sleep(5)
    drones[0].mass = 50
    print("Ending takeoff Sequence")

    masterDroneName = drones[0].name
    startTime = datetime.now()
    while (datetime.now() - startTime).seconds < 20:
        for i in range(0, len(drones)):
            gpsData = client.getGpsData(vehicle_name=drones[i].name);
            pos = np.array([gpsData.gnss.geo_point.latitude,gpsData.gnss.geo_point.longitude,0])
            positions[drones[i].name] = pos
            drones[i].position = positions[drones[i].name]
            addData(drones[i].name,pos[0],pos[1],pos[2])
            print(drones[i].name, drones[i].position)
            
            
        for i in range(1, len(drones)):
            force = np.zeros(3)
            for j in range(0, len(drones)):
                if i == j:
                    continue
                calcForce = drones[i].controlAlgorithm.computeMovementForce(drones[i], drones[j])
                print(calcForce)
                if j == 0:
                    force = force + calcForce
                else:
                    force = force - calcForce
            length = np.linalg.norm(force)
            if length > 1:
                force = force/length
            if length < 0.5:
                force = force * 0
            print(i, force)
            drones[i].moveDrone(force)
        time.sleep(1)  
    HandleLog()      
__StartUp()