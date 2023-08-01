from datetime import datetime as dt

class Member:
    def __init__(self, f_name, l_name):
        self.f_name = f_name
        self.l_name = l_name
        self.u_name = f_name[4] + "la" + l_name + "@sheg.bit"
        self.date = f"{dt.today(): %A %d %B, %Y} by {dt.now(): %I : %M : %S %p}"
        self.log = f"{self.u_name} joined on {self.date}"
        self.is_active = True
    def joined(self, reason):
        print(f"{self.log} for {reason}")

feranmi = Member("Feranmi", "Awotubo")

print(feranmi.u_name)
print(feranmi.date)
feranmi.joined("free data")
feranmi.f_name = "Gabriel"
print(feranmi.u_name)
print(feranmi.f_name)
print(feranmi.date)
feranmi.joined("free data")