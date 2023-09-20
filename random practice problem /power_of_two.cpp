#include<bits/stdc++.h>
using namespace std;
#define int long long
bool solve(int n){
	if(n==0)
		return false;
	while(n!=1){
		if(n%2!=0){
			return false;
		}
		n/=2;
	}
	return true;
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	if(solve(n)){
		cout << "Yes"<<endl;
	}
	else{
		cout << "No"<<endl;
	}
	return 0;
}