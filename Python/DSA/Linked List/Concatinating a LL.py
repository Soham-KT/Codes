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

    def concatenate(self, next_head: Node) -> None:
        self.tail.next = next_head

    def get_head(self) -> Node:
        return self.head


if __name__ == '__main__':
    LL1 = LinkedList()
    print('Linked List 1: ')
    LL1.append(1)
    LL1.append(2)
    LL1.append(3)
    LL1.append(4)
    LL1.append(5)
    LL1.display()

    LL2 = LinkedList()
    print('Linked List 1: ')
    LL2.append(6)
    LL2.append(7)
    LL2.append(8)
    LL2.append(9)
    LL2.append(10)
    LL2.display()

    print('Concatenated Linked List: ')
    LL1.concatenate(LL2.get_head())
    LL1.display()