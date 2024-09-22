#include "Graph.h"
#include <algorithm>
#include <iostream>


Graph::Graph(int n) {
    numVertices = n;
    adjMatrix.resize(n, std::vector<int>(n, 0));
    
    std::cout << "Constructor called." << std::endl;
}

Graph::~Graph() {
    std::cout << "Destructor called." << std::endl;
}

void Graph::addEdge(int u, int v) {
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;
}

void Graph::removeEdge(int u, int v) {
    adjMatrix[u][v] = 0;
    adjMatrix[v][u] = 0;
}

bool Graph::hasEdge(int u, int v) {
    return adjMatrix[u][v] == 1;
}

std::vector<int> Graph::getNeighbors(int u) {
    std::vector<int> neighbors;
    for (int v = 0; v < numVertices; v++) {
        if (adjMatrix[u][v] == 1) {
            neighbors.push_back(v);
        }
    }
    return neighbors;
}

bool Graph::isIsomorphic(Graph& other) {
    if (numVertices != other.numVertices) {
        return false;
    }

    for (int i = 0; i < numVertices; i++) {
        std::vector<int> neighbors1 = this->getNeighbors(i);
        std::vector<int> neighbors2 = other.getNeighbors(i);

        sort(neighbors1.begin(), neighbors1.end());
        sort(neighbors2.begin(), neighbors2.end());

        if (neighbors1 != neighbors2) {
            return false;
        }
    }

    return true;
}

void Graph::printGraph() {
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            std::cout << adjMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}