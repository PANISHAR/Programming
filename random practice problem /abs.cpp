#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(ll a[],ll n, ll x){
  int pos = -1;
  for(int i=0; i<n; i++){
    if(a[i]==x)
      return i;
  }
  return -1;
}
int main(){
  ll n;
  cin >> n;
  ll a[n];
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  int x;
  cin >> x;
  cout << solve(a,n,x)<<endl;
  return 0;
}