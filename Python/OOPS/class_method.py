class Phones:
    no_of_screen = 10

    def __init__(self, model, company):
        self.model = model
        self.company = company

    def show(self):
        print(f"Company name: {self.company}, Model: {self.model}, Number of screen: {self.no_of_screen}")

    @classmethod
    def new_no_screens(cls, new_scr):
        cls.no_of_screen = new_scr


ph = Phones("Iphone14", "apple")
ph.show()
ph.new_no_screens(100)
ph.show()
