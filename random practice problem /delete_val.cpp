#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> v1;
    for (int i = 0; i < n; i++) {
        if (v[i] != x) {
            v1.push_back(v[i]);
        }
    }

    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    return 0;
}
