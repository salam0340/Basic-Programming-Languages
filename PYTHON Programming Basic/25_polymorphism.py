class Camera:
    def capture(self):
        return "capturing image"

class Lidar:
    def capture(self):
        return "scanning distance"

def operate(sensor):
    print(sensor.capture())

operate(Camera())
operate(Lidar())