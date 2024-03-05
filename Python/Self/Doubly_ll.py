class Node:
    data=0
    next=None
    prev=None

class DoublyLinkedlist(Node):
    head=Node()
    tail=Node()

    def __init__(self):
        self.head=None
        self.tail=None
    
    def append(self, ele):
        temp=Node()
        temp.data=ele
        if(self.head==None):
            self.head=temp
            self.tail=self.head
        else:
            temp.prev=self.tail
            temp.next=None
            self.tail.next=temp
            self.tail=temp
    
    def display_from_head(self):
        p=self.head
        while p is not None:
            print(p.data, end=" ")
            p=p.next

    def display_from_tail(self):
        p=self.tail
        while p is not None:
            print(p.data, end=" ")
            p=p.prev

    def delete_last(self):
        temp=self.tail
        self.tail=self.tail.prev
        self.tail.next=None
        print(f"\nDeleted element: {temp.data}")
        del temp

    def delete_first(self):
        temp=self.head
        self.head=self.head.next
        self.head.prev=None
        print(f"\nDeleted element: {temp.data}")
        del temp


lst=DoublyLinkedlist()
lst.append(1)
lst.append(2)
lst.append(3)
lst.append(4)
lst.append(5)
print("List from head: ", end=" ")
lst.display_from_head()
print("\nList from tail: ", end=" ")
lst.display_from_tail()
lst.delete_last()
print("List from head: ", end=" ")
lst.display_from_head()
print("\nList from tail: ", end=" ")
lst.display_from_tail()
lst.delete_first()
print("List from head: ", end=" ")
lst.display_from_head()
print("\nList from tail: ", end=" ")
lst.display_from_tail()