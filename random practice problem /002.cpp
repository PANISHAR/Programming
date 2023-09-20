#include <iostream>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int mult(ll a, ll b) {
    return (a * b) % MOD;
}

int pow(int base, int exp) {
    if (exp == 0)
        return 1;

    ll ans = 1;
    ll x = base;

    while (exp > 0) {
        if (exp % 2 == 1) {
            ans = mult(ans, x);
        }
        x = mult(x, x);
        exp /= 2;
    }

    return ans;
}

int main() {
    freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

    int tc;
    cin >> tc;

    while (tc--) {
        int l, r;
        cin >> l >> r;

        ll res = 1;
        for (int i = l; i <= r; ++i) {
            res = mult(res, i);
        }

        int ans = pow(res, 1);
        cout << ans << endl;
    }

    return 0;
}
