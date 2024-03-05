class contact_list:
    dic = dict()
    ite = 0
    First_Name = ""
    Last_Name = ""
    Company = "None"
    Mobile_No = 0
    Email = ""

    def entry(self):
        self.First_Name, self.Last_Name = input("Enter First and Last name: ").split()
        self.Company = input("Enter comapny: ")
        self.Mobile_No = int(input("Enter mobile number: "))
        self.Email = input("Enter email: ")
        contact_list.dic[contact_list.ite] = {"Name: ": self.First_Name+" "+self.Last_Name, "Company: ":self.Company, "Mobile No.:": self.Mobile_No, "Email: ":self.Email}
        contact_list.ite += 1

    def display(self):
        print(contact_list.dic)

soham = contact_list()
soham.entry()
soham.display()