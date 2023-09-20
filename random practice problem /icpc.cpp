#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int t,n,q,x,y,z,p[N],c[N],ans[N];
map<int,int> h;

int find(int x)
{
    if(p[x] == x) return x;
    return p[x] = find(p[x]);
}

void Union(int x,int y)
{
    int u = find(x),v = find(y);
    if(u == v) return;
    if(c[u] < c[v])
    {
        p[u] = v;
        c[v] += c[u];
        ans[v] += ans[u];
    }
    else
    {
        p[v] = u;
        c[u] += c[v];
        ans[u] += ans[v];
    }
}

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n;
        h.clear();
        for(int i=1;i<=n;i++)
        {
            cin >> x;
            h[x] = i;
            ans[i] = x;
            c[i] = 1;
            p[i] = i;
        }
        cin >> q;
        while(q--)
        {
            cin >> x >> y;
            if(x == 1)
            {
                int u = find(h[y]),v = find(h[z]);
                if(u == v) continue;
                if(ans[u] < ans[v])