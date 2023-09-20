#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(vector<ll>&a){
	int cnt1 = 0, cnt = 0;
	for(ll n : a){
		if(cnt1 ==0){
			cnt2 = n;

		}
		cnt1+= (n==cnt2) ? 1:-1;
	}
	return cnt2;
}
int main(){
	ll n;
	cin >> n;
	vector<ll>a(n);
	for(ll i = 0; i<n; i++){
		cin >> a[i];
	}
	ll m = solve(a);
	ll operation = 0;
	for(ll n : a){
		if(n!=m){
			operation++;
		}
		cout << operation << endl;
	}
	return 0;
}