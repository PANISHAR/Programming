#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
int t, n, q, s[N];
map<int, int> mp;
vector<int> p[N];

int find(int x) {
    if (p[x][0] == x) return x;
    return p[x][0] = find(p[x][0]);
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        mp.clear();
        for (int i = 1; i <= n; i++) {
            cin >> s[i];
            p[i].clear();
            p[i].push_back(i);
            mp[s[i]] = i;
        }
        cin >> q;
        while (q--) {
            int op, x, y;
            cin >> op >> x;
            if (op == 1) {
                cin >> y;
                int fx = find(x), fy = find(y);
                if (fx == fy) continue;
                if (p[fx].size() > p[fy].size()) swap(fx, fy);
                for (int i = 0; i < p[fx].size(); i++) {
                    p[fy].push_back(p[fx][i]);
                    p[fx][i] = 0;
                }
                p[fx].clear();
                p[fx].push_back(fy);
            } else if (op == 2) {
                cout << p[find(x)].size() - 1 << endl;
            } else {
                cout << mp[s[x]] << endl;
            }
        }
    }
    return 0;
}