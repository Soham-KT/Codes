class person:
    # public
    name = "soham"

    # private
    __age = 19

    # self is this pointer(like in cpp) for python
    def display(self):
        print(self.name, self.__age)

    def __str__(self):
        return f"{self.name}, {self.__age}"


if __name__ == "__main__":
    p = person()
    print("By default: ", end=" ")
    p.display()
    p.name = "kothari"
    p.age = 29
    print("after changing: ", end=" ")
    p.display()
    print(p)
