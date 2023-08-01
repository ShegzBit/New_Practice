start = input("Enter a number or world to know whether it's palindrome: ")
myList = []
i = 0
size = len(start) - 1
while i <= size:
    myList.append(start[size])
    size -= 1
palin = ''.join(myList)
if palin == start:
    print(f"{start} is palindrome")
else:
    print(f"{start} is not palindrome\nbecause the reverse is {palin}")