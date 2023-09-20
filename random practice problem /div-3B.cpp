#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int b_size = n * (n - 1) / 2;
        vector<int> b(b_size);

        for (int i = 0; i < b_size; i++) {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        vector<int> a(n);
        a[0] = b[b_size - 1];
        for (int i = 1; i < n; i++) {
            a[i] = b[b_size - (i + 1) * i / 2];
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
