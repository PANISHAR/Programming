#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int>& arr) {
    int n = arr.size();
    int operations = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            operations += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int result = solve(arr);
        cout << result << endl;
    }

    return 0;
}
