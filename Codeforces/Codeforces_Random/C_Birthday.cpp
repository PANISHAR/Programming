#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    vector<int> v1(n);
    int l = 0, r = n - 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            v1[l++] = v[i];
        } else {
            v1[r--] = v[i];
        }
    }

    for (int i=0; i<v1.size(); i++){
        cout << v1[i] << " ";
    }

    return 0;
}
