x = int(input("Enter a number to get the factorial: "))
def factorial(x):
    if x == 1:
        return x
    return (x * factorial(x - 1))
def factorial_large(x):
    retval = 1
    while x > 1:
        retval *= x
        x -= 1
    return retval
print(f"factorial {x} = {factorial_large(x)} and aslo -+-> {factorial(x)}")
