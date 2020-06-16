from Shape import Shape
from Cuboid import Cuboid
from Sphere import Sphere

#main

inp = []
for i in range(6):
    inp.append(input())

sphere = Sphere(int(inp[0]),inp[1])
cubiod = Cuboid(int(inp[2]),int(inp[3]),int(inp[4]),inp[5])

print("{}:({}),{},{}".format(str(sphere),sphere.getRadius(),sphere.getVolume(),sphere.getColor()))
print("{}:({},{},{}),{},{}".format(str(cubiod),cubiod.getLength(),cubiod.getWidth(),cubiod.getHeight(),cubiod.getVolume(),cubiod.getColor()))