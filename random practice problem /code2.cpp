#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    int s = 0;
    for (int i = 0; i < n.length(); i++) {
        char c = n[i];
        s += (c - '0');
    }
    int num = 0, temp = 1;
    for (int i = n.length() - 1; i >= 0; i--) {
        char c = n[i];
        num += (c - '0') * temp;
        temp *= 10;
    }
    if (num % s == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
