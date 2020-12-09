# -*- coding: utf-8 -*-
"""
Created on Thu Nov 26 18:30:50 2020

@author: forni
"""
import TerminalCheck as tCheck
import ModifySettings as mod

def test0():
    xPos = 1.0
    yPos = 1.0
    zPos = 1.0
    droneSize = 1
    outCome = True
    
    try:
        isValid = tCheck.checkAddDrone(droneSize, xPos,yPos,zPos)
    except:
        isValid = not outCome
    
    passOrFail(isValid, "Test0", outCome)
    
def test1():
    xPos = 1
    yPos = 1
    zPos = 1
    droneSize = 1
    outCome = True
    
    try:
        isValid = tCheck.checkAddDrone(droneSize, xPos,yPos,zPos)
    except:
        isValid = not outCome
    
    passOrFail(isValid, "Test1", outCome)
    
def test2():
    xPos = 'Hi'
    yPos = 1
    zPos = 1
    droneSize = 1
    outCome = False
    
    try:
        isValid = tCheck.checkAddDrone(droneSize, xPos,yPos,zPos)
    except:
        isValid = outCome
        
    passOrFail(isValid, "Test2", outCome)

def test3():
    xPos = 1
    yPos = 'Hi'
    zPos = 1
    droneSize = 1
    outCome = False
    
    try:
        isValid = tCheck.checkAddDrone(droneSize, xPos,yPos,zPos)
    except:
        isValid = outCome
        
    passOrFail(isValid, "Test3", outCome)
    
def test4():
    xPos = 1
    yPos = 1
    zPos = 'Hi'
    droneSize = 1
    outCome = False
    
    try:
        isValid = tCheck.checkAddDrone(droneSize, xPos,yPos,zPos)
    except:
        isValid = outCome
        
    passOrFail(isValid, "Test4", outCome)

def test5():
    xPos = 1
    yPos = 1
    zPos = 1
    droneSize = 10
    outCome = False
    
    try:
        isValid = tCheck.checkAddDrone(droneSize, xPos,yPos,zPos)
    except:
        isValid = outCome
    
    passOrFail(isValid, "Test5", outCome)

def test6():
    indexRemove = 0
    droneSize = 1
    outCome = True
    
    try:
        isValid = tCheck.checkRemoveDrone(indexRemove, droneSize)
    except:
       isValid = not outCome
       
    passOrFail(isValid, "Test6", outCome)
    
def test7():
    indexRemove = 2
    droneSize = 1
    outCome = False
    
    try:
        isValid = tCheck.checkRemoveDrone(indexRemove, droneSize)
    except:
        isValid = outCome
        
    passOrFail(isValid, "Test7", outCome)
    
def test8():
    indexRemove = 0
    droneSize = 0
    outCome = False
    
    try:
        isValid = tCheck.checkRemoveDrone(indexRemove, droneSize)
    except:
        isValid = outCome
        
def test9():
    indexRemove = 1
    droneSize = 1
    outCome = True
    
    try:
        isValid = tCheck.checkRemoveDrone(indexRemove, droneSize)
    except:
        isValid = not outCome
        
    passOrFail(isValid, "Test9", outCome)

def passOrFail(isValid, strTest, outCome):
    
    if(isValid == outCome):
        print("Pass " + strTest)
    else:
        print("Failed " + strTest)
        
    
test0()
test1()
test2()
test3()
test4()
test5()
test6()
test7()   
test8()   
test9()       
        

    
    
    
    
    