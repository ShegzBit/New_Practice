check = int(input("Enter number to check if even or odd: "))
state = "odd" if check & 1 else "even"
print(f"{check} is {state}")
