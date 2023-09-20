#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        bool possible = true;
        for (int i = 0; i < n-1; i++) {
            if (s[i] == s[i+1]) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
