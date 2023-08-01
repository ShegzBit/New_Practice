import genPass as gp
def savePass():
    myPass = {}
    myPassKey = input("Enter the site for which password you just saved: ")
    myPassValue = gp.GenPass()
    myPass.update([(myPassKey, myPassValue)])
    with open("pass.csv", 'a') as f:
        for k, v in myPass.items():
            f.write(k + ',')
            f.write(v + '\n')
savePass()