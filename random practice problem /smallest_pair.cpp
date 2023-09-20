#include<bits/stdc++.h>
using namespace std;
const int N =1e9;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	int a[n+1];
	
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}

	
	int mn = N;
	for(int i=1; i<=n; i++){
		for(int j=i+1; j<=n; j++){
			mn= min(mn,a[i]+a[j]+j-i);
		}
	}
	cout << mn<<endl;
}

	return 0;
}