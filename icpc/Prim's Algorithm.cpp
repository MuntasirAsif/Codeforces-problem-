#include<bits/stdc++.h>

using namespace std;

const int INF = 1e9;

struct Edge {
    int to, weight;
    Edge(int _to, int _weight) : to(_to), weight(_weight) {}
};

int prim(vector<vector<Edge>>& graph) {
    int n = graph.size();
    vector<int> dist(n, INF);
    vector<bool> inMST(n, false);
    int totalWeight = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[0] = 0;
    pq.push({0, 0});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (inMST[u]) continue;

        inMST[u] = true;
        totalWeight += dist[u];

        for (const Edge& edge : graph[u]) {
            int v = edge.to;
            int weight = edge.weight;
            if (!inMST[v] && weight < dist[v]) {
                dist[v] = weight;
                pq.push({dist[v], v});
            }
        }
    }

    return totalWeight;
}

int main() {
    int n = 6; // Number of vertices
    vector<vector<Edge>> graph(n);

    graph[0].push_back(Edge(1, 2));
    graph[0].push_back(Edge(2, 4));
    graph[1].push_back(Edge(2, 1));
    graph[1].push_back(Edge(3, 3));
    graph[1].push_back(Edge(4, 7));
    graph[2].push_back(Edge(4, 5));
    graph[3].push_back(Edge(4, 6));
    graph[3].push_back(Edge(5, 8));
    graph[4].push_back(Edge(5, 9));

    int minimumWeight = prim(graph);
    cout << "Minimum Spanning Tree Weight: " << minimumWeight << endl;

    return 0;
}
