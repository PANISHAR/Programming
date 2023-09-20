#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a < b && a < c)
            cout << "First" << endl;
        else if (b < a && b < c)
            cout << "Second" << endl;
        else
            cout << "Third" << endl;
    }
    return 0;
}