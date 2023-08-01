class students:
    def __init__(self, name, grade, age):
        self.name = name
        self.grade = grade
        self.age = age
        self.is_enrolled = True
        self.is_expelled = not (self.is_enrolled)
    def activate(self, yesno):
        """sets is_enrolled to true or false depending on the data passed by user"""
        self.is_enrolled = yesno
        self.is_expelled = not self.is_enrolled
    def status(self):
        """returns student's enrollment status"""
        return ([self.is_enrolled, self.is_expelled])

dara = students("Darasimi Awotubo", 9, 13)

dara.activate(False)
status = dara.status()
print(f"Enrolled: {status[0]}\nExpelled: {status[1]}")