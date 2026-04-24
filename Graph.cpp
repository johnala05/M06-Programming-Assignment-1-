#include "Graph.h"
#include <iostream>

Graph::Graph(int vertices)
    : numVertices(vertices), adjList(vertices) {}

// Add an undirected edge between u and v
void Graph::addEdge(int u, int v) {
    if (u < 0 || v < 0 || u >= numVertices || v >= numVertices) {
        std::cerr << "Invalid edge (" << u << ", " << v << ")\n";
        return;
    }
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

// Recursive utility function for DFS
void Graph::dfsUtil(int v, std::vector<bool>& visited) {
    visited[v] = true;
    std::cout << v << " ";

    for (int neighbor : adjList[v]) {
        if (!visited[neighbor]) {
            dfsUtil(neighbor, visited);
        }
    }
}

// Public DFS function
void Graph::dfs(int startVertex) {
    if (startVertex < 0 || startVertex >= numVertices) {
        std::cerr << "Invalid start vertex: " << startVertex << "\n";
        return;
    }

    std::vector<bool> visited(numVertices, false);
    std::cout << "DFS traversal starting at " << startVertex << ": ";
    dfsUtil(startVertex, visited);
    std::cout << std::endl;
}
