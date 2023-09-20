#include<bits/stdc++.h>
using namespace std;
#define int long long
int solve(int n, string &s){
	int cnt=0;
	for(int i=i; i<n; i++){
		if(s[i]==s[i-1]){
			cnt++;
		}
	}
	return cnt;
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	cout << solve(n,s)<<endl;
	return 0;
}