#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

class Graph {
public:
    Graph(int n);
    ~Graph();

    void addEdge(int u, int v);
    void removeEdge(int u, int v);
    bool hasEdge(int u, int v);
    std::vector<int> getNeighbors(int u);
    bool isIsomorphic(Graph& other);
    void printGraph();
private:
    int numVertices;
    std::vector<std::vector<int>> adjMatrix;
};

#endif