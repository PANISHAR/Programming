#include <bits/stdc++.h>

using namespace std;

#define ll long long

void pos(ll s, ll& x, ll& y) {
    ll n = ceil(sqrt(s));
    ll m = n * n - (n - 1);
    if (n % 2 == 0) {
        if (s < m) {
            x = s - (n - 1) * (n - 1);
            y = n;
        } else {
            x = n;
            y = n * n - s + 1;
        }
    } else {
        if (s < m) {
            x = n;
            y = s - (n - 1) * (n - 1);
        } else {
            x = n * n - s + 1;
            y = n;
        }
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        ll s, x, y;
        cin >> s;
        pos(s, x, y);
        cout << "Case " << i << ": " << x << " " << y << endl;
    }
    return 0;
}
