#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> primes;

void sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    int T;
    cin >> T;
    sieve(10000);  
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int time = 0;
        while (X < Y) {
            time++;
            int smallest_prime_factor = -1;
            for (int prime : primes) {
                if (X % prime == 0) {
                    smallest_prime_factor = prime;
                    break;
                }
            }
            X += smallest_prime_factor;
        }
        cout << time << endl;
    }
    return 0;
}