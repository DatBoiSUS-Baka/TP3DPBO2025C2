from Spin import Spin
from Step import Step
from Jump import Jump

class Dancer:
    def __init__(self, nameDancer, age):
        self.__nameDancer = nameDancer
        self.__age = age
        self.__spinMove = []
        self.__stepMove = []
        self.__jumpMove = []
    
    def setNameDancer(self, name):
        self.__nameDancer = name
    def getNameDancer(self):
        return self.__nameDancer
    
    def setAge(self, age):
        self.__age = age
    def getAge(self):
        return self.__age    
    
    def learnSpin(self, name, duration, difficulty, speed):
        spin = Spin(name, duration, difficulty, speed)
        self.__spinMove.append(spin)
    def learnStep(self, name, duration, difficulty, intensity):
        step = Step(name, duration, difficulty, intensity)
        self.__stepMove.append(step)
    def learnJump(self, name, duration, difficulty, height):
        jump = Jump(name, duration, difficulty, height)
        self.__jumpMove.append(jump)
    
    def showMoves(self):
        print(f"\n{self.getNameDancer()} has learned:")
        for spin in self.__spinMove:
            print(f"- {spin.getName()} {spin.getDuration()} seconds with {spin.getSpinSpeed()} rpm")
        for step in self.__stepMove:
            print(f"- {step.getName()} {step.getDuration()} seconds with {step.getStepIntensity()} intensity")
        for jump in self.__jumpMove:
            print(f"- {jump.getName()} {jump.getDuration()} seconds with a height of {jump.getJumpHeight()}")