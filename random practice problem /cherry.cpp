#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = 0;
        for (int i = 0; i < n - 1; i++) {
            
            ans = max(ans, static_cast<long long>(a[i]) * a[i + 1]); 
        }
        cout << ans << '\n';
    }
    return 0;
}
