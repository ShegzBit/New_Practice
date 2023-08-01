"""ROT13 ceasar cypher"""
def rot13helper(char):
    if (ord(char) >= ord("A") and ord(char) <= ord("M")) or (ord(char) >= ord("a") and ord(char) <= ord("m")):
        v = ord(char) + 13
        return (chr(v))
    v = ord(char) - 13
    print(v)
    return(chr(v))

def CCyph(char, shiftV):
    val = ord(char)
    restrict = 26 - shiftV
    if ((val >= ord("A") and val <= (ord("A") + restrict)) or (val >= ord("a") and val <= (ord("a") + restrict))):
        retval = chr(val + shiftV)
        return(retval)
    retval = chr(val - restrict)
    return(retval)

def ROT13(string, shiftV):
    newString = []
    for char in string:
        if char.isalpha():
            newString += CCyph(char, shiftV)
        else:
            newString += char
    for i in newString:
        print(i, end="")
string = input("Enter string to encrypt: ")
shiftV = int(input("Enter your desired shift Value: "))
ROT13(string, shiftV)