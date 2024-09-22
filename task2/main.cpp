#include "Graph.h"
#include <iostream>

using namespace std;


int main() {
    Graph graph1(4);
    Graph graph2(4);

    graph1.addEdge(0, 1);
    graph1.addEdge(0, 2);
    graph1.addEdge(1, 2);
    graph1.addEdge(1, 3);

    graph2.addEdge(0, 1);
    graph2.addEdge(0, 2);
    graph2.addEdge(1, 2);
    graph2.addEdge(1, 3);

    cout << "Graph 1:" << endl;
    graph1.printGraph();

    cout << "Graph 2:" << endl;
    graph2.printGraph();

    if (graph1.isIsomorphic(graph2)) {
        cout << "Graphs are isomorphic." << endl;
    } else {
        cout << "Graphs are not isomorphic." << endl;
    }

    return 0;
}
