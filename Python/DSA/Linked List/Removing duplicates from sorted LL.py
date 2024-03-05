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

    def removing_duplicates(self) -> None:
        current_node = self.head
        next_node = current_node.next
        while next_node:
            if current_node.data == next_node.data:
                current_node.next = next_node.next
                next_node = next_node.next
            else:
                current_node = next_node
                next_node = next_node.next


if __name__ == '__main__':
    LL = LinkedList()
    LL.append(1)
    LL.append(1)
    LL.append(2)
    LL.append(2)
    LL.append(2)
    LL.display()
    LL.removing_duplicates()
    LL.display()
