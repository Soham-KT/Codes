class Employee:
    def __init__(self):
        print()
        self.empName = input("Enter name of employee: ")
        self.empId = input("Enter employee ID: ")
        self.empPosition = input("Enter position of employee: ")
        self.empSalary = int(input("Enter salary of employee: "))
        self.empPhoneNo = input("Enter employee phone number: ")
        self.empEmail = input("Enter email of employee: ")


class Stack:
    def __init__(self, size: int):
        self.topOfStack = -1
        self.size = size
        self.stk = [0] * size

    def append(self, empRecord: Employee) -> None:
        if self.topOfStack == self.size:
            print("Stack overflow")
            return

        else:
            self.topOfStack += 1
            self.stk[self.topOfStack] = empRecord
            return

    def pop(self) -> None:
        if self.topOfStack == -1:
            print("Stack underflow")
            return

        else:
            print(f"Element popped:")
            self.top()
            self.topOfStack -= 1
            return

    def top(self) -> None:
        if self.topOfStack == -1:
            print("Stack underflow")
            return

        else:
            print("Employee Name:", self.stk[self.topOfStack].empName)
            print("Employee ID:", self.stk[self.topOfStack].empId)
            print("Employee Position:", self.stk[self.topOfStack].empPosition)
            print("Employee Salary:", self.stk[self.topOfStack].empSalary)
            print("Employee Phone Number:", self.stk[self.topOfStack].empPhoneNo)
            print("Employee Email:", self.stk[self.topOfStack].empEmail)
            return

    def isEmpty(self) -> bool:
        return True if self.topOfStack == -1 else False


if __name__ == "__main__":
    # size of stack is 5
    s = Stack(5)

    while True:
        choice = int(input(
            "\n1) Append Employee Record\n2) Pop Employee Record\n3) Display top of stack\n4) Check if stack is "
            "empty\n5) Exit\nEnter your choice: "))
        
        # To append a record
        if choice == 1:
            emp = Employee()
            s.append(emp)

        # To pop a record
        elif choice == 2:
            s.pop()

        # To display a record
        elif choice == 3:
            s.top()

        # To check if is stack has a record
        elif choice == 4:
            if s.isEmpty():
                print("Stack empty")

            else:
                print("Stack is not empty")

        else:
            break
