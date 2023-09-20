#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    int max_diff = abs(a[0] - a[n-1]);
    cout << max_diff << endl;
    return 0;
}
