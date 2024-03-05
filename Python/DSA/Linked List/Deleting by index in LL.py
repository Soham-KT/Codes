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

    def delete(self, ind: int) -> None:
        current_node = self.head
        counter = 0
        if counter == ind:
            if self.head is None:
                return
            else:
                self.head = self.head.next

        else:
            while current_node and (counter + 1) != ind:
                current_node = current_node.next
                counter += 1

            if current_node.next is not None:
                current_node.next = current_node.next.next
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
    index = int(input('Enter index to delete: '))
    LL.delete(index)
    LL.display()
