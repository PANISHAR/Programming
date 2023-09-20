#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int cnt=0;
        int n,a,b;
        cin >> n >> a >> b;
        for(int i=1; i<=n; i++){
            if(i %2 ==0){
                cnt+=b;
            }
            else{
                cnt+=a;
            }
        }
    }
    return 0;
}