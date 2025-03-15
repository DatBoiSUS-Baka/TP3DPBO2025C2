import BasicMove

class Jump(BasicMove):
    def __init__(self, name, duration, difficulty, height):
        super().__init__(name, duration, difficulty)
        self.__jumpHeight = height
    
    def setJumpHeight(self, height):
        self.__jumpHeight = height
    def getJumpHight(self):
        return self.__jumpHeight
    