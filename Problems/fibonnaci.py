def fib(x):
    n1 = 0
    n2 = 1
    temp = fibHelper(x, n1, n2)
    print(f"fibonacci -> {str(temp)}")
def fibHelper(x, n1, n2):
    print(f"fibonacci -> {str(n1)}")
    temp = n2
    n2 += n1
    n1 = temp
    if (x > n1):
        temp = fibHelper(x, n1, n2)
    return (temp)

fib(14)