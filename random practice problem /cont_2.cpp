#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000005
bool prime[MAXN];

void sieve() {
    memset(prime, true, sizeof(prime));
    for (int i = 2; i * i <= MAXN; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    sieve();
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int ans = 0;
        while (x < y) {
            ans++;
            int p = x + 1;
            while (!prime[p]) {
                p++;
            }
            x += p;
        }
        cout << ans << endl;
    }
    return 0;
}