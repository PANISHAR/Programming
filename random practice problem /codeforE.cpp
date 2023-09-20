#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 100000007
#define SIZE 1e6+2


ll solve(ll n){
	vector<ll>dig;
	ll x = 0;
	while(n>0){
		dig.push_back(n%9);
		n/=9;

	}
	ll size = dig.size();
	for(ll i = size-1; i>=0;i--){
		x = x*10 + dig[i];
	}
	return x;
}

void fuck(){
	ll n; 
	cin >> n;
	string s = to_string(solve(n));
	replace(s.begin(),s.end(),'8', '9');
	replace(s.begin(),s.end(),'7', '8');
	replace(s.begin(),s.end(),'6', '7');
	replace(s.begin(),s.end(),'5', '6');
	replace(s.begin(),s.end(),'4', '5');
	cout << s << endl;

}

int main(){
	ll t;
	cin >> t;
	while(t--){
		fuck();
	}
	return 0;
}