
def binarySearch(list1,key):
    value = -1
    if key in list1:
        value = list1.index(key)
    return value

#main
list1=[1,3,5,7,9,11,13,15,17]
list2=[1.1,3.3,5.5,7.7,9.9,11.1,13.3,15.5,17.7]
inputlist = []
for i in range(6):
    inputlist.append((input()))
print("list1:" , list1)
for i in range(3):
    print("{} at {}".format(inputlist[i],binarySearch(list1,int(inputlist[i]))))
print("list2:", list2)
for i in range(3):
    print("{} at {}".format(inputlist[i+3],binarySearch(list2,float(inputlist[i+3]))))