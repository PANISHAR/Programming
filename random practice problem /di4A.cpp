#include<bits/stdc++.h>
using namespace std;

int solve(){
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    if(d<b){
        cout << "-1"<<endl;
        return 0;
    }
    long long move = (d-b);
    a = a + move;
    if(a<c){
        cout << "-1"<<endl;
    }
    else{
        move += (a-c);
        cout << move << endl;
    }
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}