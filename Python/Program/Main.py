from Spin import Spin
from Step import Step
from Jump import Jump
from Dancer import Dancer

name = input("Who is the name of the dancer? ")
age = int(input("What is their age? "))

dancer1 = Dancer(name, age)

n = int(input("How many moves for spin?"))
m = int(input("How many moves for step?"))
k = int(input("How many moves for jump?"))

for i in range(n):
    name = input("Move name: ")
    duration = input("Move duration: ")
    diff = input("Move difficulty: ")
    speed = int(input("Move spin speed: "))
    dancer1.learnSpin(name, duration, diff, speed)

for i in range(m):
    name = input("Move name: ")
    duration = input("Move duration: ")
    diff = input("Move difficulty: ")
    intensity = int(input("Step intensity: "))
    dancer1.learnStep(name, duration, diff, intensity)

for i in range(k):
    name = input("Move name: ")
    duration = input("Move duration: ")
    diff = input("Move difficulty: ")
    height = int(input("Jumping height: "))
    dancer1.learnJump(name, duration, diff, height)


dancer1.showMoves()