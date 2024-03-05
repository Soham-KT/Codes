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

    def search(self, val) -> int:
        current_node = self.head
        counter = 0
        while current_node:
            counter += 1
            if current_node.data == val:
                return counter

            current_node = current_node.next

        return -1


if __name__ == '__main__':
    LL = LinkedList()
    LL.append(1)
    LL.append(2)
    LL.append(3)
    LL.append(4)
    LL.append(5)
    LL.display()
    ele = int(input('Enter element to search: '))
    ind = LL.search(ele)

    if ind != -1:
        print(ele, 'found at index:', ind)
    else:
        print(ele, 'not found in linked list')
