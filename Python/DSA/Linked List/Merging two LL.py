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

    def get_head(self) -> Node:
        return self.head

    def merge(self, p: Node, q: Node) -> None:
        if p.data < q.data:
            self.head = self.tail = p
            p = p.next
            self.tail.next = None
        else:
            self.head = self.tail = q
            q = q.next
            self.tail.next = None

        while p and q:
            if p.data < q.data:
                self.tail.next = p
                self.tail = p
                p = p.next
                self.tail.next = None

            else:
                self.tail.next = q
                self.tail = q
                q = q.next
                self.tail.next = None

        if p:
            self.tail.next = p
        if q:
            self.tail.next = q


if __name__ == '__main__':
    LL1 = LinkedList()
    LL2 = LinkedList()
    LL1.append(1)
    LL1.append(3)
    LL1.append(5)
    LL1.display()

    LL2.append(2)
    LL2.append(4)
    LL2.append(6)
    LL2.display()

    LL3 = LinkedList()
    LL3.merge(LL1.get_head(), LL2.get_head())
    LL3.display()
