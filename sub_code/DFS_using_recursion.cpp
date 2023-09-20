// DFS using recursion...


#include<bits/stdc++.h>
using namespace std;

void dfsRecursive(vector<vector<int>>& graph, vector<bool>& visited, int node) {
    // Mark the current node as visited
    visited[node] = true;
    cout << node << " ";

    // Traverse all adjacent nodes of the current node
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            //cout << "parent : "<<node<<" "<<"child : "<<neighbor<<endl;
            dfsRecursive(graph, visited, neighbor);
        }
    }
}

int main() {
    int n, m; // Number of nodes and edges
    cin >> n >> m;

    vector<vector<int>> graph(n + 1); // Adjacency list representation
    vector<bool> visited(n + 1, false); // Array to track visited nodes

    // Input edges
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int startNode;
    cin >> startNode; // Starting node for DFS

    cout << "DFS starting from " << startNode << ": ";
    cout << endl;
    dfsRecursive(graph, visited, startNode);

    return 0;
}
