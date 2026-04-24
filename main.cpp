#include <iostream>
#include "Graph.h"

int main() {
    int vertices, edges;
    std::cout << "Enter number of vertices: ";
    std::cin >> vertices;

    Graph g(vertices);

    std::cout << "Enter number of edges: ";
    std::cin >> edges;

    std::cout << "Enter each edge as: u v\n";
    for (int i = 0; i < edges; ++i) {
        int u, v;
        std::cin >> u >> v;
        g.addEdge(u, v);
    }

    int startVertex;
    std::cout << "Enter starting vertex for DFS: ";
    std::cin >> startVertex;

    g.dfs(startVertex);

    return 0;
}
