#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& v) {
    int n = v.size();
    int op = 0;
    bool sorted = true;

    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        int min = INT_MAX;
        for (int i = n - 2; i >= 0; i--) {
            int diff = v[i + 1] - v[i];
            int div = (diff / 2) + 1;
            if (div < min)
                min = div;
        }
        return min;
    } else {
        return 0;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int result = solve(v);
        cout << result << endl;
    }

    return 0;
}
