#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int arr[3] = {a, b, c};
    sort(arr, arr+3);

    int diff1 = arr[1] - arr[0];
    int diff2 = arr[2] - arr[1];

    cout << diff1 + diff2 << endl;

    return 0;
}
