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

    def check_for_loop(self) -> bool:
        p1 = p2 = self.head
        p1 = p1.next
        p2 = p2.next
        p2 = p2.next if p2 else p2
        while (p1 and p2) and (p1 != p2):
            p1 = p1.next
            p2 = p2.next
            p2 = p2.next if p2 else p2

        if p1 == p2:
            return True

        else:
            return False

    def create_loop(self) -> None:
        self.tail.next = self.head


if __name__ == '__main__':
    LL = LinkedList()
    LL.append(1)
    LL.append(2)
    LL.append(3)
    LL.append(4)
    LL.append(5)
    LL.display()
    print('Check for loop:', LL.check_for_loop())
    print('Created loop')
    LL.create_loop()
    print('Check for loop:', LL.check_for_loop())

