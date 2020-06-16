from Body import Body


class Teacher(Body):
    def __init__(self,name,body,salary):
        self.__name = name
        self.__body = body
        self.__salary = salary

    def setName(self,name):
        self.__name = name

    def getName(self):
        return self.__name

    def setBody(self,body):
        self.__body = body

    def getBody(self):
        return self.__body

    def setSalary(self,salary):
        self.__salary = salary

    def getSalary(self):
        return self.__salary

    def toString(self):
        return "{} {} {}".format(self.__name,self.__body.toString(),self.__salary)