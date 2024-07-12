#include<bits/stdc++.h>
using namespace std;

struct Edge {
    int from, to, weight;
    Edge(int _from, int _to, int _weight) : from(_from), to(_to), weight(_weight) {}
    bool operator<(const Edge& other) const {
        return weight < other.weight;
    }
};

const int MAX_VER = 6;

int parent[MAX_VER];

int find(int x) {
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}

void unionSets(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y)
        parent[y] = x;
}

int kruskal(vector<Edge>& edges, int n) {
    sort(edges.begin(), edges.end());
    for (int i = 0; i < n; i++)
        parent[i] = i;

    int mstWeight = 0;
    vector<Edge> mstEdges;

    for (const Edge& edge : edges) {
        if (find(edge.from) != find(edge.to)) {
            mstWeight += edge.weight;
            mstEdges.push_back(edge);
            unionSets(edge.from, edge.to);
        }
    }

    return mstWeight;
}

int main() {
    int n = 6;
    vector<Edge> edges;

    edges.push_back(Edge(0, 1, 2));
    edges.push_back(Edge(0, 2, 4));
    edges.push_back(Edge(1, 2, 1));
    edges.push_back(Edge(1, 3, 3));
    edges.push_back(Edge(1, 4, 7));
    edges.push_back(Edge(2, 4, 5));
    edges.push_back(Edge(3, 4, 6));
    edges.push_back(Edge(3, 5, 8));
    edges.push_back(Edge(4, 5, 9));

    int minWeight = kruskal(edges, n);
    cout << "Minimum Spanning Tree Weight: " << minWeight << endl;

    return 0;
}
