class Robot:
    def __init__(self, name):
        self.name = name
    def greet(self):
        return f"Hello, I am {self.name}"

r = Robot("Saphira")
print(r.greet())