class Body:
    def __init__(self,height,weight):
        self.__weight = weight
        self.__height = height

    def setWeight(self,weight):
        self.__weight = weight

    def getWeight(self):
        return self.__weight

    def setHeight(self,height):
        self.__height = height

    def getWeight(self):
        return self.__weight

    def toString(self):
        return round(self.__weight/self.__height**2,2)