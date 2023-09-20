#include<bits/stdc++.h>
using namespace std;
#define int long long
int solve(int n,int page){
	int a=0,b=0;
	if(page==1)
		return 0;
	if(n==page)
		return 0;
	for(int i=2; i<=page; i++){
		if(i%2==0){
			a++;
		}
	}
	for(int i=n-1; i>=page; i--){
		if(i%2!=0){
			b++;
		}
	}
	return min (a,b);
	
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int p;
	cin >>p;
	cout << solve(n,p)<<endl;
	return 0;
}