#include<bits/stdc++.h>
using namespace std;
bool solve(int set[],int n, int sum){
	if(sum==0)
		return true;
	if(n==0)
		return false;
	if(set[n-1]>sum)
		return solve(set,n-1,sum);
	return solve(set,n-1,sum)||(set,n-1,sum-set[n-1]);
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int set[n];
	for(int i=0; i<n; i++){
		cin >> set[i];

	}
	int sum=9;
	if(solve(set,n,sum)==true){
		cout << "found a subset with given sum"<<endl;
	}
	else{
		cout << "not found a subset with given sum"<<endl;
	}
	return 0;
}