#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+10;
int adj[mx][mx];
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    while(m--){
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; // Assuming an undirected graph
    }

    // Printing neighbors of each node
    for(int u = 0; u < n; u++){
        cout << "Neighbors of node " << u << ": ";
        for(int v = 0; v < n; v++){
            if(adj[u][v] == 1){
                cout << v << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
