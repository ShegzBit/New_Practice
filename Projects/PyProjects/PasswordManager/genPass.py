def GenPass():
    import random as rnd
    string = "1234567890abcdefghijklmnopqrstuvwxyz~!@#$%^&*()_+`{ }|:\"<>?"
    myList = []
    i = 0
    size = rnd.randint(8, 16)
    while i < size:
        randV = string[rnd.randrange(len(string) - 1)]
        myList += randV
        i += 1
    myPass = ''.join(myList)
    return myPass