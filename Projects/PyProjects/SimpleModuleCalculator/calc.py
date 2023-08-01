def add(x:int, y:int ) -> int:
    return x + y
def mul(x: int, y: int) -> int:
    return x * y
def sub(x: int, y: int) -> int:
    return x - y
def div(x: int, y: int) -> int:
    return x / y
def mod(x: int, y: int) -> int:
    return x % y

def select(x, y, z):
    x = int(x)
    y = int(y)
    if (z == '+'):
        return (add(x, y))
    if(z == '-'):
        return (sub(x, y))
    if (z == 'x'):
        return (mul(x, y))
    if (z == '/'):
        return (div(x, y))
    if (z == '%'):
        return (mod(x, y))

if __name__ == "__main__":
    print("This is a module nothing to run here Import to use functions :)")

