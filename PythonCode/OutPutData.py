# -*- coding: utf-8 -*-
"""
Created on Thu Nov 26 21:14:27 2020

@author: forni
"""
import pandas as pd
import ModifySettings as mod
import matplotlib.pyplot as plt

def createDataFrame():
    names = mod.getVehicles()

    
    for i in range(len(names)):
            position = dict() #Need to create a new dict or else it will share the same memory
            position['X'] = []
            position['Y'] = []
            position['Z'] = []
            data[names[i][0]] = position
      

def addData(name,xPos,yPos,zPos):
    data[name]['X'].append(xPos)
    data[name]['Y'].append(yPos)
    data[name]['Z'].append(zPos)
    
def writeCSV():
    df = pd.DataFrame.from_dict(data)
    df.to_csv(r'P:\GitHub\UAVswarm\PythonCode\dataOut.csv')

def plot():
    plt.plot(data['UAV1']['X'], data['UAV1']['Y'])
    fig = plt.figure()
    ax = plt.axes(projection='3d')
    plt.plot(data['UAV1']['X'], data['UAV1']['Y'],data['UAV1']['Z'])

data = dict()
createDataFrame()
writeCSV()