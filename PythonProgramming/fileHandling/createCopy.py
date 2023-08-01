fileRead = 'info.txt'
part = fileRead.split('.')
fileWrite = part[0] + "_c." + part[1]

with open(fileRead, 'r') as fileR:
    with open(fileWrite, 'w') as fileW:
        temp = fileR.read(1024)
        while len(temp) > 0:
            fileW.writelines(temp)
            print(temp)
            temp = fileR.read(1024)
