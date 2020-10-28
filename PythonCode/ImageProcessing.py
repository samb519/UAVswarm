
import airsim

#Global testing variables
#droneNum = 3
#initialPositions = np.array([[2,0,-2],[4,0,-2],[6,0,-2]])
VEHICLENAME = "UAV"

def connectToUnreal():
    #initializing AirSim Simulator
    tempClient = airsim.MultirotorClient()
    tempClient.confirmConnection()
    return  tempClient
    
def initalizeDrone(client,droneNum,droneNames):
    #intializing drones
    for i in range(droneNum):
        droneName = "".join(map(str,droneNames[i]))
        client.enableApiControl(True,droneName)
        client.armDisarm(True,droneName)
        client.takeoffAsync(vehicle_name=droneName)
         
    # Get Image data (Initialization)
    for i in range(droneNum):
        name = "".join(map(str,droneNames[i]))
        imgs = client.simGetImages([
            airsim.ImageRequest("0", airsim.ImageType.Scene, False, False)],vehicle_name= name)
        # Scene vision image in uncompressed RGBA array
        img = imgs[0]
    
        if i == 0:
            imgArray = img.image_data_uint8
        else:
            imgArray = imgArray + img.image_data_uint8
    
    imgWidth = img.width
    imgHeight = img.height
    
    for i in range(droneNum):
        name = "".join(map(str,droneNames[i]))
        imgs = client.simGetImages([
            airsim.ImageRequest("0", airsim.ImageType.Scene, False, False)],vehicle_name= name)
        # Scene vision image in uncompressed RGBA array
        img = imgs[0]
    
        if i == 0:
            imgArray = img.image_data_uint8
        else:
            imgArray = imgArray + img.image_data_uint8

