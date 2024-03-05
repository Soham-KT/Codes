class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def append(self, data: int) -> None:
        temp = Node(data)
        if self.head is None:
            self.head = self.tail = temp
            self.tail.next = self.head
            return

        else:
            self.tail.next = temp
            self.tail = temp
            self.tail.next = self.head

    def display(self) -> None:
        current_node = self.head
        print('Linked List: ')
        print(current_node.data)
        current_node = current_node.next
        while current_node is not self.head:
            print(current_node.data)
            current_node = current_node.next

    def insert(self, ind: int, val: int) -> None:
        current_node = self.head
        temp = Node(val)
        counter = 0
        if counter == ind:
            if self.head is None:
                self.head = self.tail = temp
                self.tail.next = self.head
            else:
                temp.next = self.head
                self.head = temp
                self.tail.next = self.head

        while current_node and (counter + 1) != ind:
            counter += 1
            current_node = current_node.next

        if current_node:
            temp.next = current_node.next
            current_node.next = temp

        else:
            print('Index not found')


if __name__ == '__main__':
    ll = LinkedList()
    ll.append(1)
    ll.append(2)
    ll.append(3)
    ll.append(4)
    ll.append(5)
    ll.display()

    index = int(input("Enter index: "))
    element = int(input("Enter element: "))
    ll.insert(index, element)
    ll.display()
