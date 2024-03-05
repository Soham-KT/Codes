class cars:
    comp = ""
    model = ""

    # just give default values to parameters to make a parametrised default constructor
    def __init__(self, comp="Ford", model="GT500"):
        self.comp = comp
        self.model = model

    def display(self):
        print(f"Company: {self.comp}\nModel: {self.model}")


por = cars("Porsche", "911-GT3RS")
por.display()

fd = cars()
fd.display()

niss = cars("Nissan", "GTR-R34")
niss.display()
