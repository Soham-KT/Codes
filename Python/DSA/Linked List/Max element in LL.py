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

    def max_element(self) -> int:
        current_node = self.head
        max_ele = current_node.data
        while current_node:
            if current_node.data > max_ele:
                max_ele = current_node.data
            current_node = current_node.next

        return max_ele


if __name__ == '__main__':
    LL = LinkedList()
    LL.append(1)
    LL.append(2)
    LL.append(5)
    LL.append(4)
    LL.append(3)
    LL.display()
    print('Max element from LL:', LL.max_element())
