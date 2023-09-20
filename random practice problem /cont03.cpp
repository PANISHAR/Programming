#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        set<string> distinct_strings;
        for (int i = 0; i < n-1; i++) {
            distinct_strings.insert(s.substr(0, i) + s.substr(i+2));
        }

        cout << distinct_strings.size() << endl;
    }

    return 0;
}
