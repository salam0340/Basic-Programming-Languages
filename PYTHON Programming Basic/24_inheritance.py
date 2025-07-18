class Robot:
    def __init__(self, name):
        self.name = name

class DeliveryRobot(Robot):
    def deliver(self):
        return f"{self.name} is delivering now."

bot = DeliveryRobot("Courier")
print(bot.deliver())