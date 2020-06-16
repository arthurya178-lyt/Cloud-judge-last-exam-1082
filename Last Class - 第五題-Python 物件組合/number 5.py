from Body import Body
from Teacher import Teacher

#main

teacher1 = Teacher("Candy", Body(1.7, 80), 88000)
teacher2 = Teacher("Linda", Body(1.6, 90), 61000)
list1 = []
for i in range(3):
    list1.append(input())

teacher1.setName(list1[0])
teacher2.setBody(Body(float(list1[1]),float(list1[2])))

print(teacher1.toString())
print(teacher2.toString())