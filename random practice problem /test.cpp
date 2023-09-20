#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,s,r,sum;
	cin >> n >> s >> r;
	s = s-n;
	r = r-n;
	r++;
	cout << s-r+1;
	int x  = s-r;
	for(int i=0; i<n-1; i++){
		sum = min(x+1, r+1);
		r = r-sum+1;
		cout << " "<< sum;
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}i