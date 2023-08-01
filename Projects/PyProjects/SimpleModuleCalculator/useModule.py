from calc import select

begin = input("Enter operation: ")
myAction = begin.split()
if (len(myAction) != 3):
    print("Error")
    exit(1)
while (1):
    x = myAction[0]
    y = myAction[2]
    z = myAction[1]
    result = print(f"{str(select(x, y, z))}")
    begin = input("Enter operation: ")
    if (begin == 'q'):
        break
    myAction = begin.split()
print("Application ended by user :)")