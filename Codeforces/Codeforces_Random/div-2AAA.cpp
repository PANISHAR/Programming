#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 2) {
            cout << "1 2" << endl;
        } else if (n == 3) {
            cout << "1 3 2" << endl;
        } else {
            for (int i = 1; i <= n; i += 2) {
                cout << i << " ";
            }
            cout << n - 3 << " " << n - 1 << " ";
            for (int i = n - 5; i >= 2; i -= 2) {
                cout << i << " ";
            }
            cout << n << endl;
        }
    }

    return 0;
}
