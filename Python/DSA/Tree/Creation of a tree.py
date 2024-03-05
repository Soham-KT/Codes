class Node:
    def __init__(self, data: int | None) -> None:
        self.data = data
        self.left = None
        self.right = None


def build_tree(root: Node) -> Node | None:
    data = int(input("Enter data: "))
    root = Node(data)

    if data == -1:
        return None

    print(f"Enter data to insert to the left of: {data}")
    root.left = build_tree(root.left)
    print(f"Enter data to insert to the right of: {data}")
    root.right = build_tree(root.right)


def level_order_traversal(root: Node) -> None:
    queue = []
    queue.append(root)
    queue.append(None)

    while len(queue) > 0:
        temp = queue[0]
        queue.pop(0)

        if temp is None:
            print()
            if len(queue) > 0:
                queue.append(None)

        else:
            print(temp.data, " ")
            if temp.left is not None:
                queue.append(temp.left)
            elif temp.right is not None:
                queue.append(temp.right)


if __name__ == '__main__':
    root = Node(None)

    # creating a tree
    root = build_tree(root)

    level_order_traversal(root)
