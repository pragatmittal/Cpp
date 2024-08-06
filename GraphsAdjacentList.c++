#include <iostream>
#include <unordered_map>
#include <list>
#include <algorithm>

using namespace std;

class graph {
public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction) {
        adj[u].push_back(v);
        // If the graph is undirected, add the edge in both directions
        if(direction == 0)
            adj[v].push_back(u);
    }

    void printAdjList() {
        for(auto i: adj) {
            cout << i.first << " -> ";
            for(auto j: i.second)
                cout << j << ", ";
            cout << endl;
        }
    }
};

int main() {
    graph g;
    g.addEdge(0, 1, 0);
    g.addEdge(0, 4, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(1, 4, 0);
    g.addEdge(2, 3, 0);
    g.addEdge(3, 4, 0);

    g.printAdjList();

    return 0;
}
