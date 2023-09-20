#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	ll n;
	cin >>n;
	vector<ll>v(n);
	for(ll i=0; i<n;i++){
		cin >> v[i];
	}
	for(ll i=0; i<n-1; i++){
		
		ll sum = v[i]+v[i+1];
		if(sum%2==1){
			swap(v[i],v[i+1]);

		}
	}
	for(int i=0; i<n; i++){
		cout <<v[i]<<" ";
	}
	return 0;


}