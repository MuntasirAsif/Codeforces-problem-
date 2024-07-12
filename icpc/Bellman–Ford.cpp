#include <iostream>
#include <vector>

using namespace std;

struct Edge {
    int source, destination, weight;
};

void bellmanFord(vector<Edge>& edges, int numNodes, int source) {
    vector<int> distances(numNodes, INT_MAX);
    distances[source] = 0;

    for (int i = 0; i < numNodes - 1; ++i) {
        for (const Edge& edge : edges) {
            if (distances[edge.source] != INT_MAX && distances[edge.source] + edge.weight < distances[edge.destination]) {
                distances[edge.destination] = distances[edge.source] + edge.weight;
            }
        }
    }

    for (const Edge& edge : edges) {
        if (distances[edge.source] != INT_MAX && distances[edge.source] + edge.weight < distances[edge.destination]) {
            cout << "Negative weight cycle detected!" << endl;
            return;
        }
    }

    cout << "Shortest distances from node " << source << " to all other nodes:" << endl;
    for (int i = 0; i < numNodes; ++i) {
        cout << "Node " << i << ": " << distances[i] << endl;
    }
}

int main() {
    vector<Edge> edges = {
        {0, 1, 4},
        {0, 2, 3},
        {1, 2, -2},
        {1, 3, 2},
        {1, 4, 3},
        {3, 2, 5},
        {3, 1, 1},
        {4, 3, -3}
    };

    int numNodes = 5;
    int startNode = 0;

    bellmanFord(edges, numNodes, startNode);

    return 0;
}
