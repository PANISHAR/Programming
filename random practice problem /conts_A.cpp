#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string s) {
    return s == string(s.rbegin(), s.rend());
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> a(2 * n - 2);
        for (int i = 0; i < 2 * n - 2; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), [](string s1, string s2) {
            return s1.size() < s2.size();
        });
        string first = a.back();
        a.pop_back();
        string second = a.back();
        a.pop_back();
        string s1 = first + second;
        string s2 = second + first;
        if (is_palindrome(s1)) {
            cout << "YES\n";
            continue;
        }
        if (a.empty()) {
            cout << "NO\n";
            continue;
        }
        first = a.back();
        a.pop_back();
        second = a.back();
        a.pop_back();
        s1 = first + second;
        s2 = second + first;
        if (is_palindrome(s1) || is_palindrome(s2)) {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
    return 0;
}
