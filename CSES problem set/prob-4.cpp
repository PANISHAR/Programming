#include<iostream>
using namespace std;
#define ll long long 

int main(){
    ll n;
    cin >> n;
    int mx=0;
    ll cnt=0;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        mx = max(mx,x);
        cnt += mx-x;

        

    }
    cout << cnt;
    
}