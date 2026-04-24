#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

class Graph {
private:
    int numVertices;
    std::vector<std::vector<int>> adjList;

    void dfsUtil(int v, std::vector<bool>& visited);

public:
    Graph(int vertices);

    void addEdge(int u, int v);

    void dfs(int startVertex);
};

#endif
