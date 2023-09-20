// DFS using stack..

#include<bits/stdc++.h>
using namespace std;

// Function for DFS using an explicit stack
void dfsStack(vector<vector<int>>& graph, int startNode) {
    stack<int> s;
    vector<bool> visited(graph.size(), false);

    s.push(startNode);

    while (!s.empty()) {
        int node = s.top();
        s.pop();

        if (!visited[node]) {
            cout << node << " ";
            visited[node] = true;

            for (int neighbor : graph[node]) {
                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
            }
        }
    }
}

int main() {
    int n, m; // Number of nodes and edges
    cin >> n >> m;

    vector<vector<int>> graph(n + 1); // Adjacency list representation

    // Input edges
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int startNode;
    cin >> startNode; // Starting node for DFS

    cout << "DFS using stack: ";
    dfsStack(graph, startNode);

    return 0;
}
