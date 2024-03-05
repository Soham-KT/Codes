class Node:
    data = 0
    next = None


class CircularLinkedlist(Node):
    head = Node()
    tail = Node()

    def __init__(self):
        self.head = None
        self.tail = None
        self.tail = self.head

    def append(self, ele):
        temp = Node()
        temp.data = ele
        temp.next = self.head
        if self.head is None:
            self.head = temp
            self.tail = self.head

        else:
            self.tail.next = temp
            self.tail = temp

    def remove_last(self):
        p = self.head
        while p.next.next is not self.head:
            p = p.next
        temp = p.next
        p.next = self.head
        print("Deleted element: ", temp.data)
        del temp

    def display(self):
        p = self.head
        print(p.data, end=" "),
        while p.next != self.head:
            p = p.next
            print(p.data, end=" "),
        print("\n")


lst = CircularLinkedlist()
while True:
    choice = int(input("1)Append\n2)Delete last\n3)Display\nEnter your choice: "))
    if choice == 1:
        ele = int(input("Enter element to append: "))
        lst.append(ele)

    elif choice == 2:
        lst.remove_last()

    elif choice == 3:
        lst.display()

    else:
        print("Invalid input")

    ch = input("Another input?(y/n): ")
    if ch == 'n':
        break
