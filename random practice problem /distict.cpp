#include <iostream>
#include <cstring>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int c1 = 0, c2 = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '0' && s[i+1] == '1') {
                c1++;
            }
            if (s[i] == '1' && s[i+1] == '0') {
                c2++;
            }
        }

        if (c1 != c2) {
            cout << 0 << endl;
        } else {
            long long ans = 1;
            for (int i = 0; i < c1; i++) {
                ans = (ans * 2) % MOD;
            }
            ans = (ans - 1 + MOD) % MOD;
            cout << ans << endl;
        }
    }
    return 0;
}
