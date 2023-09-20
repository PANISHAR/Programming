#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i - 1];
            if (a[i - 1] == i) {
                cnt++;
            }
        }
        int res = cnt / 2;
        if (cnt % 2 != 0) {
            res++;
        }
        cout << res << endl;
    }
    return 0;
}