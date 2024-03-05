r1=int(input("Enter size of dict: "))
company={}
for i in range(r1):
    comp=input("Enter company: ")
    company[comp]={}
    name=input("Enter car name: ")
    model=input("Enter model: ")
    company[comp][name]=model

for key, val in company.items():
    print(f"{key} : {val}")