#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>a;

bool fuck(ll x, ll y, ll n){
    if(n==1)
        return true;
    if(min(y,a[n+1]-y+1) > a[n+1] - a[n])
        return false;
    y = min(y,a[n+1] - y+1);
    return fuck(y,x,n-1);

}

int main(){
    ll t;
    cin >> t;
    a.push_back(1);
    a.push_back(1);
    for(ll i =0; i<46;i++)
        a.push_back(a[i] + a[i+1]);
        
    while(t--){
        ll  n,x1,y1;
        cin >> n >> x1 >> y1;
        if(fuck(x1,y1,n))
            cout << "YES" << endl;
        else
            cout << "NO"<<endl;
    }
    return 0;
}