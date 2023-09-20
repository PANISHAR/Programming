#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_map<int, int> freq;
        int max_freq = 0;
        int max_freq_elem;

        for (int i = 0; i < n; i++) {
            int elem;
            cin >> elem;

            freq[elem]++;

            if (freq[elem] > max_freq) {
                max_freq = freq[elem];
                max_freq_elem = elem;
            }
        }

        int num_ops = n - max_freq;
        cout << num_ops << endl;
    }

    return 0;
}
