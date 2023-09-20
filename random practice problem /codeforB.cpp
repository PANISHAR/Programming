#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007


ll solve(ll x, ll y, ll n){
    x--;
    y--;
    x = min(x, n-x-1);
    y = min(y, n-y-1);
    return min(x,y);
}


void fuck(){
    ll t,n,x1,y1,x2,y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    cout << abs(solve(x1,y1,n) - solve(x2,y2,n)) << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        fuck();
    }
    return 0;
}