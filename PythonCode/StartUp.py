# -*- coding: utf-8 -*-
"""
Created on Wed Oct 28 13:21:15 2020

"""
import ImageProcessing
from ModifySettings import getVehicles
from Drone import Drone
import numpy as np
from ForceControlAlgorithm import ForceControlAlgorithm
import time

def __StartUp():
    mass = 5
    forceStrength = 0.00000000001;
    print("Starting up");
    client = ImageProcessing.connectToUnreal()
    
    droneNames = getVehicles();
    numDrones = len(droneNames)
    print(droneNames)
    drones = []

    # y,x,z
    initialPositions = np.array([[0, -2, -2], [0, 2, -2], [4, -2, -2]])

    # initializing AirSim Simulator


    positions = {}
    controller = ForceControlAlgorithm(forceStrength)
    # intializing drones
    print("Beginning Takeoff Sequence")
    for i in range(len(droneNames)):
        drone = Drone(i, "UAV" + str(i + 1), mass, client, controller)
        drones.append(drone)
        positions[drone.name] = np.array([0, 0, 0])
    time.sleep(10)
    drones[0].mass = 200
    print("Ending takeoff Sequence")
    #client.moveToPositionAsync(0,100,3,.1,vehicle_name = "UAV1")

    masterDroneName = drones[0].name
    while True:

        for i in range(0, len(drones)):
            gpsData = client.getGpsData(vehicle_name=drones[i].name);
            pos = np.array([gpsData.gnss.geo_point.latitude,gpsData.gnss.geo_point.longitude,0])
            positions[drones[i].name] = pos#client.getGpsData(vehicle_name=drones[i].name)#ImageProcessing.getLocalPosition(client, [], [masterDroneName, drones[i].name])
            drones[i].position = positions[drones[i].name]
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
__StartUp()