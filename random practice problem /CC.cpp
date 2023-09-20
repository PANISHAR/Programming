#include<bits/stdc++.h>
using namespace std;

bool solve(string s, string t) {
    int n = s.length();
    int cnt = 0;
    int l = -1, r = -1;

    for (int i = 0; i < n; ++i) {
        if (s[i] != t[i]) {
            ++cnt;
            if (cnt == 1) {
                l = i;
            } else if (cnt == 2) {
                r = i;
            } else {
                return false;
            }
        }
    }

    if (cnt == 0) {
        return true;
    } else if (cnt == 2) {
        return s[l] == t[r] && s[r] == t[l];
    }

    return false;
}

int main() {
    string s, t;
    cin >> s >> t;

    if (solve(s, t)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
