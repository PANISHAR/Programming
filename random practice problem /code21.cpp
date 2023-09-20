#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string s;
        cin >> s;
        int cnt=1;
        int res;
        for(int i = 1; i<n; i++){
            if(s[i-1]==s[i])cnt++;
                
            else{
                if(cnt&1)res+=s[i-1];
                    
                else{
                    res+=s[i-1];
                    res+=s[i-1];
                }
                cnt=1;
            }
        }
        if(cnt&1)res+=s[n-1];
            
        else{
            res+=s[n-1];
            res+=s[n-1];

    }
    cout << res << endl;
}
    
    return 0;
}