# -*- coding: utf-8 -*-
"""
Created on Thu Nov 26 21:14:27 2020

@author: forni
"""
import json
import csv
import pandas as pd
import ModifySettings as mod
import matplotlib.pyplot as plt
JSONINDENT = 4

def createDataFrame():
    names = mod.getVehicles()
    for i in range(len(names)):
            position = dict() #Need to create a new dict or else it will share the same memory
            position['X'] = []
            position['Y'] = []
            position['Z'] = []
            data[names[i]] = position
      

def addData(name,xPos,yPos,zPos):
    data[name]['X'].append(xPos)
    data[name]['Y'].append(yPos)
    data[name]['Z'].append(zPos)   

def plotSingleSwarm():
    names = mod.getVehicles()
    for i in range(len(names)):
        fig = plt.figure()
        plt.scatter(data[names[i]]['X'], data[names[i]]['Y'])
        plt.xlabel('Lat')
        plt.ylabel('Long')
        plt.title('UAV1' + " Position(Lat,Long)")
        plt.savefig(names[i]+'_2D.png')
        
        fig = plt.figure()
        ax = plt.axes(projection='3d')
        ax.set_xlabel('Lat')
        ax.set_ylabel('Long')
        ax.set_zlabel('Alt')
        plt.title(names[i] + " Positions")
        plt.scatter(data[names[i]]['X'], data[names[i]]['Y'],data[names[i]]['Z'])
        plt.plot(data[names[i]]['X'], data[names[i]]['Y'],data[names[i]]['Z'])
        plt.savefig(names[i]+'_3D.png')
        
def plotAll2D():
    names = mod.getVehicles()
    fig = plt.figure() 
    plt.title('UAV Entire Swarm' + " Position(Lat,Long)")
    plt.xlabel('Lat')
    plt.ylabel('Long')
    for i in range(len(names)):
        plt.scatter(data[names[i]]['X'], data[names[i]]['Y'],label = names[i])
        plt.plot(data[names[i]]['X'], data[names[i]]['Y'],label = names[i])
    plt.legend()
    plt.savefig('UAV Entire Swarm 2D.png')

def plotAll3D():  
    names = mod.getVehicles()
    fig = plt.figure() 
    ax = plt.axes(projection='3d')
    plt.title("UAV Entire Swarm" + " Positions") 
    ax.set_xlabel('Lat')
    ax.set_ylabel('Long')
    ax.set_zlabel('Alt')
    for i in range(len(names)):
        plt.scatter(data[names[i]]['X'], data[names[i]]['Y'],data[names[i]]['Z'],label = names[i])
        plt.plot(data[names[i]]['X'], data[names[i]]['Y'],data[names[i]]['Z'],label = names[i])
    plt.legend()
    plt.savefig('UAV Entire Swarm 3D.png')

def writeCSV():
    names = mod.getVehicles()
    for i in range(len(names)):
        df = pd.DataFrame(list(zip(*[data[names[i]]['X'],data[names[i]]['Y'], data[names[i]]['Z']]))).add_prefix('Col')
        df.to_csv(names[i]+'Log.csv', index=False)
        
def writeJson():
      with open('UAVLog.json','w') as f: 
        json.dump(data, f, indent=JSONINDENT) 

def HandleLog():
    writeCSV()
    writeJson()
    plotAll2D()
    plotAll3D()
    plotSingleSwarm()
        
data = dict()
createDataFrame()
writeCSV()