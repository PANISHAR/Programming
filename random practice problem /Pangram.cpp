#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    bool ch[26] = {false};
    
    for (char c : s) {
        if (isalpha(c)) {
            ch[tolower(c) - 'a'] = true; 
        }
    }
    
    bool isPangram = true;
    
    for (bool c : ch) {
        if (!c) {
            isPangram = false;
            break;
        }
    }
    
    if (isPangram) {
        cout << "YES\n";
    } else {
    cout << "NO\n";
    }
    return 0;
}