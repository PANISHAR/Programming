#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int n;
vector<int> adj[N];
int a[N], cnt[N], max_cnt[N];
int ans[N];

void dfs(int u, int p) {
    cnt[a[u]]++;
    max_cnt[u] = cnt[a[u]];
    for (int v : adj[u]) {
        if (v != p) {
            dfs(v, u);
            max_cnt[u] = max(max_cnt[u], max_cnt[v]);
        }
    }
    cnt[a[u]]--;
}

void solve(int u, int p, int tot) {
    ans[u] = max(tot - max_cnt[u], max_cnt[u] <= tot/2 ? max_cnt[u] : tot-max_cnt[u]);
    for (int v : adj[u]) {
        if (v != p) {
            solve(v, u, tot);
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    dfs(1, 0);
    solve(1, 0, n);
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        if (u > v) swap(u, v);
        if (u == 1) swap(u, v);
        cout << ans[u] << '\n';
    }
    return 0;
}
