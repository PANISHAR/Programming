#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }

        std::sort(arr.begin(), arr.end()); // Sort the array in ascending order

        int maxCost = 0;
        for (int i = 0; i < n - 1; i++) {
            maxCost = std::max(maxCost, arr[i + 1] - arr[i]);
        }

        std::cout << maxCost << std::endl;
    }

    return 0;
}
