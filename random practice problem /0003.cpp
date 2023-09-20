#include<bits/stdc++.h>
using namespace std;

void solve(){
int n,q;
cin >> n >> q;
vector<int>a(n), pre(n,0);
int sum = 0;
 for(int i=0; i<n; i++){
    
    cin >> a[i];
    sum+=a[i];
 }
 pre[0] = a[0];
 for(int i=0; i<n; i++) pre[i] = a[i] + pre[i-1];
    while(q--){
        int l,r,k;
        cin >> l >> r >>k;
        int kss = pre[r-1] - (pre[l-1]- a[l-1]);
        int nss = sum - kss + (r-l+1)*k;
        if(nss%2)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}