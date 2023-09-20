#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int sum=0;
	int x;
	for(int i=2; i<=n; i++){
		cin>>x;
		sum+=x;
	}
	cout << n*(n+1)/2 - sum<<endl;
	return 0;
}