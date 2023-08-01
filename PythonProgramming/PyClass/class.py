"""Creating My first class
Class dog with attributes name and owner
and characteristics bark and run"""

class Dog:
    def __init__(self, name, owner):
        self.name = name
        self.owner = owner
    def bark(self):
        print(f"{self.name} is barking at you")
    def run(self):
        print(f"{self.name} is running towards {self.owner}")
Jackson = Dog("Jackson", "Feranmi")
Jackson.bark()
Jackson.run()
print(Jackson)
print(type(Jackson))