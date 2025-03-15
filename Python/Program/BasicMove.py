class BasicMove:
    def __init__(self, name, duration, difiiculty):
        self.__name = name
        self.__duration = duration
        self.__difficulty = difiiculty
    
    def setName(self, name):
        self.__name = name
    def getName(self):
        return self.__name
    
    def setDuration(self, duration):
        self.__duration = duration
    def getDuration(self):
        return self.__duration
    
    def setDifficulty(self, difficulty):
        self.__difficulty = difficulty
    def getDifficulty(self):
        return self.__difficulty
