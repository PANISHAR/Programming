#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a, a+n);
        
        int k = n-x;
        
        cout << a[k]-1 << endl;
            }
        
    
    return 0;
}