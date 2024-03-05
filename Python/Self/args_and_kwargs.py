def fun_args(nrml, *args, **kwargs):
    print(f"This is normal: {nrml}")
    print("\nThese are args: ")
    for val in args:
        print(val, end=" ")
    print("\nThese are kwargs: ")
    for key, value in kwargs.items():
        print(f"{key}, {value}", end=" ")


normal = "Hello World"
arg = ["Hello", "There", "general", "kenobi"]
kilo = {"apple": "iphone", "oneplus": "op9", "hotel": "trivago"}
fun_args(normal, *arg, **kilo)
