#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while(T--) {
        int n;
        cin >> n;
        
        int a, b;
        
        if(n <= 10) {
            a = 0;
            b = n;
        }
        else if(n <= 20) {
            a = n - 10;
            b = 10;
        }
        else {
            a = b = 10;
        }
        
        cout << a << " " << b << endl;
    }
    
    return 0;
}
