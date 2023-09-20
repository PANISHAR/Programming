#include<bits/stdc++.h>
using namespace std;
#define int long long
int solve(int a, int b){
int res = a*b;
	if(res>=1e9){
		return -1;
	}
	else{
		return (a*b);
	}
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b;
	cin >>a >> b;
	cout << solve(a,b)<<endl;
	return 0;
}