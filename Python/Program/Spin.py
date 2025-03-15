from BasicMove import BasicMove

class Spin(BasicMove):
    def __init__(self, name, duration, difficulty, speed):
        super().__init__(name, duration, difficulty)
        self.__spinSpeed = speed
    
    def setSpinSpeed(self, speed):
        self.__spinSpeed = speed
    def getSpinSpeed(self):
        return self.__spinSpeed