#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int ans = min(a, b);
        cout << ans << endl;
    }
    return 0;
}
