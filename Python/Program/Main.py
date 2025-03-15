from Spin import Spin
from Step import Step
from Jump import Jump
from Dancer import Dancer

name = input("Who is the name of the dancer? ")
age = int(input("What is their age? "))

dancer1 = Dancer(name, age)

dancer1.learnSpin("Ground_spin", 3, "Beginner", 300)

dancer1.showMoves()