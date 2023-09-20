#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9+7;
const int N = 1e5+5;

int t, n, a[N], b[N], fact[N], invfact[N], dp[N], freq[N];

int power(int x, int p) {
    int res = 1;
    while (p > 0) {
        if (p & 1) {
            res = (res * x) % MOD;
        }
        x = (x * x) % MOD;
        p >>= 1;
    }
    return res;
}

void init() {
    fact[0] = 1;
    for (int i = 1; i <= N; i++) {
        fact[i] = (fact[i-1] * i) % MOD;
    }
    invfact[N] = power(fact[N], MOD-2);
    for (int i = N-1; i >= 0; i--) {
        invfact[i] = (invfact[i+1] * (i+1)) % MOD;
    }
}

int nCr(int n, int r) {
    if (r > n || r < 0 || n < 0) {
        return 0;
    }
    int res = (fact[n] * invfact[r]) % MOD;
    res = (res * invfact[n-r]) % MOD;
    return res;
}

int solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    vector<pair<int,int>> diff;
    for (int i = 1; i <= n; i++) {
        diff.push_back({a[i]-b[i], i});
    }
    sort(diff.begin(), diff.end());
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || diff[i].first != diff[i-1].first) {
            cnt++;
        }
        freq[cnt]++;
    }
    dp[cnt+1] = 1;
    for (int i = cnt; i >= 1; i--) {
        int sum = 0;
        for (int j = i+1; j <= cnt+1; j++) {
            sum = (sum + dp[j] * nCr(freq[i]+freq[j-1]-1, freq[i])) % MOD;
        }
        dp[i] = sum;
    }
    return dp[1];
}

signed main() {
    init();
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
    return 0;
}
