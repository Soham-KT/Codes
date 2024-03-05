class Node:
    data=0
    next=None

class LinkedList:
    __head=Node()
    __tail=Node()

    def __init__(self):
        self.__head=None
        self.__tail=None
        self.__tail=self.__head

    def append(self, ele):
        temp=Node()
        temp.data=ele
        temp.next=None
        if (self.__head==None):
            self.__head=temp
            self.__tail=self.__head
        
        else:
            self.__tail.next=temp
            self.__tail=temp

    def remove_last(self):
        p=self.__head
        while p.next.next is not None:
            p=p.next
        print("Element Deleted:", p.next.data)
        del p.next

    def display(self):
        p=self.__head
        print("List: ", end=" ")
        while p is not None:
            print(p.data, end=" ")
            p=p.next
        print("\n")

lst=LinkedList()
while(True):
    choice=int(input("1)Append\n2)Delete last\n3)Display\nEnter your choice: "))
    if(choice==1):
        ele=int(input("Enter element to append: "))
        lst.append(ele)
    
    elif(choice==2):
        lst.remove_last()

    elif(choice==3):
        lst.display()

    else:
        print("Invalid input")
    
    ch=input("Another input?(y/n): ")
    if(ch=='n'):
        break