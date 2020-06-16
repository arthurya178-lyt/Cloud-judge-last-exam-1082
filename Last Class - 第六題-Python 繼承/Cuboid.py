from Shape import Shape


class Cuboid(Shape):
    def __init__(self,length,width,height,color):
        self.setColor(color)
        self.__length = length
        self.__width = width
        self.__height = height

    def setLength(self,length):
        self.__length = length

    def setWidth(self,width):
        self.__width = width

    def setHeight(self,height):
        self.__height = height

    def getLength(self):
        return  self.__length

    def getWidth(self):
        return self.__width

    def getHeight(self):
        return  self.__height

    def getVolume(self):
        return round(float(self.__height * self.__width * self.__length),1)
    def __str__(self):
        return "Cubiod"

