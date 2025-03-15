from BasicMove import BasicMove

class Step(BasicMove):
    def __init__(self, name, duration, difficulty, intensity):
        super().__init__(name, duration, difficulty)
        self.__stepIntensity = intensity
    
    def setStepIntensity(self, intensity):
        self.__stepIntensity = intensity
    def getStepIntensity(self):
        return self.__stepIntensity