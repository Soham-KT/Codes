class Graph:
    def __init__(self):
        self.adjacency_list = {}
        self.hash_map = {}

    def insert_vertex(self, vertex: int) -> None:
        if vertex not in self.adjacency_list:
            self.adjacency_list[vertex] = []
            self.hash_map[vertex] = 0

    def insert_edge(self, vertex1: int, vertex2: int) -> None:
        if vertex1 in self.adjacency_list and vertex2 in self.adjacency_list:
            self.adjacency_list[vertex1].append(vertex2)
            self.adjacency_list[vertex2].append(vertex1)

    def BFS(self, vertex: int) -> None:
        q = [vertex]
        while len(q) != 0:
            front = q[0]
            q.pop(0)

            if self.hash_map[front] == 0:
                self.hash_map[front] = 1
                print(front, end=" ")

                for i in self.adjacency_list[front]:
                    q.append(i)

        print()


if __name__ == '__main__':
    g = Graph()
    g.insert_vertex(1)
    g.insert_vertex(2)
    g.insert_vertex(3)
    g.insert_vertex(4)
    g.insert_vertex(5)
    g.insert_vertex(6)

    g.insert_edge(1, 2)
    g.insert_edge(2, 3)
    g.insert_edge(3, 5)
    g.insert_edge(2, 5)
    g.insert_edge(4, 5)
    g.insert_edge(1, 4)
    g.insert_edge(6, 4)

    g.BFS(2)
