#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    

    int s = x / 5;
    
    
    if (x % 5 != 0) {
        s++;
    }
    
    cout << s << endl;
    return 0;
}
