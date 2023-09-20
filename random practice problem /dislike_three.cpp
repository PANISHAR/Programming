#include<bits/stdc++.h>
using namespace std;

bool check(int n) {
    return n % 3 == 0 || n % 10 == 3;
}

int solve(int k) {
    int cnt = 0;
    int n = 1;
    while (cnt < k) {
        if (!check(n)) {
            cnt++;
        }
        n++;
    }
    return n - 1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
       cout << solve(k)<<endl;
    }

    return 0;
}
