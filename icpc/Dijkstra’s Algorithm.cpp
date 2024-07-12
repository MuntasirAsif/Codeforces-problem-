#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <map>

using namespace std;

typedef pair<int, int> pii;
typedef vector<pii> vii;

void dijkstra(map<int, vii> &graph, int start) {
    map<int, int> distances;
    for (auto& pair : graph) {
        distances[pair.first] = INT_MAX;
    }
    distances[start] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int current_node = pq.top().second;
        int current_distance = pq.top().first;
        pq.pop();

        if (current_distance > distances[current_node]) {
            continue;
        }

        for (const auto& neighbor : graph[current_node]) {
            int neighbor_node = neighbor.first;
            int weight = neighbor.second;

            int distance = current_distance + weight;

            if (distance < distances[neighbor_node]) {
                distances[neighbor_node] = distance;
                pq.push({distance, neighbor_node});
            }
        }
    }

    cout << "Shortest distances from node " << start << ":" << endl;
    for (const auto& pair : distances) {
        cout << "Node " << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    map<int, vii> graph;

    // Add edges and their weights to the graph
    graph[0].push_back({1, 4});
    graph[0].push_back({2, 1});
    graph[1].push_back({2, 2});
    graph[1].push_back({3, 5});
    graph[2].push_back({3, 1});

    int start_node = 0;
    dijkstra(graph, start_node);

    return 0;
}
