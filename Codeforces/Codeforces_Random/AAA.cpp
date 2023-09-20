#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int e_cnt = 0;
        int odd_cnt = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                e_cnt++;
            } else {
                odd_cnt++;
            }
        }

        
    }

    return 0;
}
