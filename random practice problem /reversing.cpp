#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int zero = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            for (int j = i - 1; j >= zero; j--) {
                swap(arr[j], arr[i]);
                i--;
            }
            zero = i + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
