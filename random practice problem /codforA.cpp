#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        string s;
        cin >> n >> d >> s;
        bool ins = false;
        for (int i = 0; i < n; i++) {
            if (s[i] < d + '0') {
                s.insert(i, 1, d + '0');
                ins = true;
                break;
            }
        }
        if (!ins) {
            s += d + '0';
        }
        cout << s << endl;
    }
    return 0;
}
