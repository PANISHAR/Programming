#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = n;
    while (ans % 2 != 0 || ans % n != 0) {
        ans += n;
    }
    cout << ans << endl;
    return 0;
}
