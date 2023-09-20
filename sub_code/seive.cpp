#include<bits/stdc++.h>
using namespace std;

vector<int>prime;

void solve(int n){
	for(int i=2; i*i<=n; i++){
		if(prime[i]==0){
			for(int j=i*i; j<=n; j+=i){
				if(prime[i]==0)prime.push_back(i);
			}
		}
	}
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		solve(n);
		for(int i=0; i<prime.size();i++){
			cout << prime[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}