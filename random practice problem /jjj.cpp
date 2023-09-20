#include<bits/stdc++.h>

using namespace std;
#define ll long long

ll solve(vector<ll>& v, ll k) {
    sort(v.begin(), v.end());
    int n = v.size();
    int i = 0;
    ll ans = 0;

    while (i < n) {
        int j = i + 1;
        while (j < n) {
            if (v[j] - v[j - 1] > k) {
                break;
            }
            j++;
        }
        ll tt = j - i;
        ans = max(ans, tt);
        i = j;
    }
    return n - ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        
        cout <<solve(v,k)<<endl;
    }

    return 0;
}
