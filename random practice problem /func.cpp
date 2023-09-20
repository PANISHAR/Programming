#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 100000007


void fuck(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++)
        cin >> a[i];
        for(ll i=0; i<257; i++){
            vector<ll>b(n);
            for(ll j=0; j<n; j++){
                b[j] = a[j]^i;

            }
            ll ans = 0;
            for(ll k=0; k<n; k++){
                ans^=b[k];
            }
            if(ans==0){
                cout << i << endl;
                return;
            }
        }
        cout << -1 << endl;
    
}

int main(){
    ll t;
    cin >> t;
    while(t--){
    fuck();
    }
}