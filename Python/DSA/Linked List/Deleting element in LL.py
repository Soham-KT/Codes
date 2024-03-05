class Node:
    def __init__(self, data: int):
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

    def delete(self, data: int) -> None:
        current_node = self.head
        if self.head.data == data:
            if self.head is None:
                return
            else:
                self.head = self.head.next

        else:
            while current_node and current_node.next.data != data:
                current_node = current_node.next

            if current_node is not None:
                current_node.next = current_node.next.next
            else:
                return


if __name__ == '__main__':
    LL = LinkedList()
    LL.append(1)
    LL.append(2)
    LL.append(3)
    LL.append(4)
    LL.append(5)
    LL.display()
    ele = int(input('Enter element to delete: '))
    LL.delete(ele)
    LL.display()
