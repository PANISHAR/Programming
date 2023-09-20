#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt=0;
        int x;
        for(int i=1; i<=n; i++){
            cin >> x;
            cnt=max(cnt,x-i);
        }
        cout <<cnt<<endl;
    }
    return 0;
}