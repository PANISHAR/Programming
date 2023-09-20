#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
	ll n;
	cin >> n;
	int a[n];
	for(int i=0;i<n; i++){
		cin >> a[i];

	}
	int b[n];
	for(int i=0; i<n; i++){
		cin >> b[i];
	}
	int mx = max(a[n-1],b[n-1]);
	int mn = min(a[n-1],b[n-1]);
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}