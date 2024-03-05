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

    def reverse_by_values(self) -> None:
        current_node = self.head
        lst = []
        while current_node:
            lst.append(current_node.data)
            current_node = current_node.next

        new_current_node = self.head
        i = len(lst) - 1
        while new_current_node:
            new_current_node.data = lst[i]
            new_current_node = new_current_node.next
            i -= 1

    def reverse_by_links(self) -> None:
        p1 = self.head
        p2 = None
        p3 = None

        while p1:
            p3 = p2
            p2 = p1
            p1 = p1.next
            p2.next = p3

        self.head = p2

    def get_head(self) -> Node:
        return self.head

    def set_head(self, new_h: Node) -> None:
        self.head = new_h


def reverse_by_recursion(h: Node) -> Node | None:
    if h is None:
        return h
    if h.next is None:
        return h.next

    new_head = reverse_by_recursion(h.next)
    h.next.next = h
    h.next = None

    return new_head


if __name__ == '__main__':
    LL = LinkedList()
    LL.append(1)
    LL.append(2)
    LL.append(3)
    LL.append(4)
    LL.append(5)
    LL.display()

    print('After reversing by values')
    LL.reverse_by_values()
    LL.display()

    print('After reversing by links')
    LL.reverse_by_links()
    LL.display()

    print('After recursive reversion')
    start = LL.get_head()
    new_start = reverse_by_recursion(start)
    LL.set_head(new_start)
    LL.display()
