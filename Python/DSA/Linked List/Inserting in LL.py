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
            return

        else:
            self.tail.next = temp
            self.tail = temp

    def display(self) -> None:
        current_node = self.head
        print('Linked List: ')
        while current_node:
            print(current_node.data)
            current_node = current_node.next

    def insert(self, ind, val) -> None:
        current_node = self.head
        temp = Node(val)
        counter = 0
        if counter == ind:
            if self.head is None:
                self.head = self.tail = temp
            else:
                temp.next = self.head
                self.head = temp

        while current_node and (counter + 1) != ind:
            counter += 1
            current_node = current_node.next

        if current_node:
            temp.next = current_node.next
            current_node.next = temp

        else:
            print('Index not found')


if __name__ == '__main__':
    LL = LinkedList()
    LL.append(1)
    LL.append(2)
    LL.append(3)
    LL.append(4)
    LL.append(5)
    LL.display()

    index = int(input('Enter index: '))
    element = int(input('Enter element: '))
    LL.insert(index, element)
    LL.display()