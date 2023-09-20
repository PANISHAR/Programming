#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9; 
int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> adj(n+1); 
    for(int i=0; i<m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); 
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // Min heap for Dijkstra's algorithm
    vector<int> dist(n+1, INF); 
    pq.push({0, 1}); 
    dist[1] = 0;

    while(!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if(d > dist[u]) continue; 

        for(auto v: adj[u]) {
            int to = v.first;
            int len = v.second;
            if(dist[u] + len < dist[to]) { 
                dist[to] = dist[u] + len;
                pq.push({dist[to], to});
            }
        }
    }

    if(dist[n] == INF) cout << "-1\n"; 
    else {
        vector<int> path; 
        int curr = n;
        path.push_back(curr);
        while(curr != 1) { 
            for(auto v: adj[curr]) {
                int to = v.first;
                int len = v.second;
                if(dist[to] + len == dist[curr]) {
                    curr = to;
                    path.push_back(curr);
                    break;
                }
            }
        }
        reverse(path.begin(), path.end()); 
        for(auto v: path) cout << v << " "; 
    }

    return 0;
}
