def add(x: int, y: int):
    return x + y

def sub(x: int, y: int):
    return x - y

def mul(x: int, y: int):
    return x * y

def div(x: int, y: int):
    return x / y

def mod(x: int, y: int):
    return x % y

if __name__ == "__main__":
    from sys import argv
    print(str(add(int(argv[1]), int(argv[2]))))
