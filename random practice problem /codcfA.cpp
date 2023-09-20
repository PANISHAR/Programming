#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> num(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> num[i];
            sum += num[i];
        }
        if (sum % 2 == 1) {
            cout << "NO\n";
            continue;
        }
        bool dp[sum / 2 + 1];
        memset(dp, false, sizeof(dp));
        dp[0] = true;
        for (int i = 0; i < n; i++) {
            for (int j = sum / 2; j >= num[i]; j--) {
                dp[j] |= dp[j - num[i]];
            }
        }
        if (dp[sum / 2]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
