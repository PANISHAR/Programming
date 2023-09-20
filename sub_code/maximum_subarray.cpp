#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		int a[n+1];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		

		 for(int l=1; l<=n; l++){
		 	for(int r=l; r<=n; r++){

		 		int mx = -1e9;
		 		for(int i=l; i<=r; i++){
		 			mx = max(mx,a[i]);
		 		}
		 		cout << mx << " ";
		 	}
		 }
		 cout << endl;
	}
	return 0;
}