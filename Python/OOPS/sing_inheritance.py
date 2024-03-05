class A:
    def __init__(self, name):
        self.name = name

    def print_hello(self):
        print(f"Hello: {self.name}")


class B(A):
    def there(self):
        self.print_hello()


h = B("General Kenobi")
h.there()
