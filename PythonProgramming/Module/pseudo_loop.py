 
i = 1
def a():
    global i
    print(str(i)); i += 1
def b():
    a(), a(), a(), a(), a()
def c():
    b(), b(), b(), b(), b()
def d():
    c(), c(), c(), c()
d()