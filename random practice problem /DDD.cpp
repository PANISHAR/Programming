#include <iostream>
#include <algorithm>

using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        int i = 0;
        ll ans = 0;

        while (i < n) {
            int j = i + 1;
            while (j < n) {
                if (a[j] - a[j - 1] > k) {
                    break;
                }
                j++;
            }
            ll tt = j - i;
            ans = max(ans, tt);
            i = j;
        }
        cout << n - ans << endl;
    }

    return 0;
}
