#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input_custom.txt", "r", stdin);
    freopen("output_custom.txt", "w", stdout);

    int tc;
    cin >> tc;
    int i = 1; // Initialize the case number
    while (tc--) {
        int a, b;
        cin >> a >> b;
        int sum = a + b;
        cout << "Case " << i << ": " << sum << endl;
        i++; // Increment the case number
    }
    return 0;
