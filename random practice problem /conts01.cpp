#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        string s, t;
        cin >> s >> t;

        // Count the frequency of each letter in s and t
        vector<int> freq_s(26), freq_t(26);
        for (char c : s) {
            freq_s[c - 'a']++;
        }
        for (char c : t) {
            freq_t[c - 'a']++;
        }

        bool can_transform = true;
        for (int i = 0; i < 26; i++) {
            // If s and t have different frequencies of a certain letter, we cannot transform s to t
            if (freq_s[i] != freq_t[i]) {
                can_transform = false;
                break;
            }
        }

        // If s and t have different lengths, we cannot transform s to t
        if (s.length() != t.length()) {
            can_transform = false;
        }

        // Check if s can be transformed into t by swapping letters at a distance of k or k+1
        for (int i = 0; i < n; i++) {
            if (s[i] != t[i]) {
                int j = i + k;
                if (j < n && s[j] == t[i] && t[j] == s[i]) {
                    // Swap the letters at positions i and j
                    swap(s[i], s[j]);
                } else {
                    j = i + k + 1;
                    if (j < n && s[j] == t[i] && t[j] == s[i]) {
                        // Swap the letters at positions i and j
                        swap(s[i], s[j]);
                    } else {
                        // If we cannot swap letters to make s equal to t, we cannot transform s to t
                        can_transform = false;
                        break;
                    }
                }
            }
        }

        if (can_transform) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
