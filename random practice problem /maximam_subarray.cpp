#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int ans =-1e8;
	for(int l=0; l<n; l++){
		for(int r = l; r<n; r++){
			int sum = 0;
			for(int i=1; i<=r; i++){
				sum+=a[i];
			}
			ans = max(ans,sum);
		}
	}
	cout << ans << endl;

	return 0;
}