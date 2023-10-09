// do it normally.
// don't think complexity.
#include<bits/stdc++.h>
using namespace std;

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    
    
    for (int i = 3; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

vector<int> get_prime(int n) {
    vector<int> primes;

    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int n;
   
    cin >> n;

    vector<int> primes = get_prime(n);

    
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
