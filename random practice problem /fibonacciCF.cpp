#include<bits/stdc++.h>
using namespace std;
const int N =50;
long long a[N+1];

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	a[1]=0;
	a[2]=1;
	for(int i=3; i<=n; i++){
		a[i] = a[i-1]+a[i-2];
	}
	cout << a[n]<<endl;
	return 0;
}