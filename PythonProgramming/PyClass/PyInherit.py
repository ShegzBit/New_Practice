import datetime as dt

class Computer:
    free_period = 365
    def __init__(self, ram, rom):
        self.ram = ram
        self.rom = rom
        start_date = dt.datetime.today()
        exp_date = start_date + dt.timedelta(days=self.free_period)

class Smartphone(Computer):
    def __init__(self, screen_size, sim_no, ram, rom):
        self.screen_size = screen_size
        self.sim_no = sim_no
    def print_det(self):
        print(f"screen size -> {self.screen_size}")
        print(f"sim no -> {self.sim_no}")
        print(f"ram -> {self.ram}")
        print(f"rom -> {self.rom}")
        print(f"expiry date -> {self.exp_date}")

tecno = Smartphone(5.3, 2, 3, 64)
tecno.print_det()
Smartphone.print_det(tecno)
