class Battery:
    def __init__(self, charge=100):
        self._charge = charge

    @property
    def charge(self):
        return self._charge

    @charge.setter
    def charge(self, value):
        if 0 <= value <= 100:
            self._charge = value
        else:
            raise ValueError("Charge must be between 0 and 100")

b = Battery(50)
print(b.charge)
b.charge = 80
print(b.charge)