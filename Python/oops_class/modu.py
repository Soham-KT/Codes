import person_class as prc

if __name__ == "__main__":
    pres = prc.person()
    print("By default: ", end=" ")
    pres.display()
    pres.name = "Obiwan"
    pres.age = 29
    print("after changing: ", end=" ")
    pres.display()
    print(pres)
