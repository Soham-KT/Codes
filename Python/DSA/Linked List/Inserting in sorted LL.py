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

    def insert_sorted(self, data: int) -> None:
        current_node = self.head
        temp = Node(data)

        if current_node.data > data:
            if self.head is None:
                self.head = self.tail = temp
            else:
                temp.next = self.head
                self.head = temp

        else:
            while current_node:
                if current_node.next.data > data or current_node.next is None:
                    break
                current_node = current_node.next

            temp.next = current_node.next
            current_node.next = temp


if __name__ == '__main__':
    LL = LinkedList()
    LL.append(2)
    LL.append(4)
    LL.append(6)
    LL.append(8)
    LL.append(10)
    LL.display()
    ele = int(input('Enter element to insert: '))
    LL.insert_sorted(ele)
    LL.display()
