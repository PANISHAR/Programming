// graph implement by using adjacency list.


#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int vertex;
    cin >> vertex;
    vector<vector<int> > graph(vertex + 1);

    int edge;
    cin >> edge;
    for (int i = 0; i < edge; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= vertex; i++) {
        cout << "vertex " << i << " -> ";
        for (auto neighbor : graph[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}
