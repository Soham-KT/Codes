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


if __name__ == '__main__':
    ll = LinkedList()
    ll.append(1)
    ll.append(2)
    ll.append(3)
    ll.append(4)
    ll.append(5)
    ll.display()