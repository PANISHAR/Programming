#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int indices[n];
    for (int i = 0; i < n; ++i) {
        cin >> indices[i];
    }

    sort(indices, indices + n);

    int minStolen = indices[0] - 1 + 1000000000 - indices[n - 1];

    for (int i = 1; i < n; ++i) {
        minStolen = min(minStolen, indices[i] - indices[i - 1] - 1);
    }

    cout << minStolen << endl;

    return 0;
}
