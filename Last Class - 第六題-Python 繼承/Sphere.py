from Shape import Shape

class Sphere(Shape):
    def __init__(self,radius,color):
        self.setColor(color)
        self.__radius = radius

    def setRadius(self,radius):
        self.__radius = radius

    def getRadius(self):
        return self.__radius

    def getVolume(self):
        return round(4/3 * 3.14159 * (self.__radius **3),2)

    def __str__(self):
        return "Sphere"