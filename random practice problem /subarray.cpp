#include<bits/stdc++.h>
using namespace std;
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

		for(int i=1; i<=n; i++){
			for(int j=i; j<=n; j++){
				int maxi = -1e6;
				for(int k=i; k<=j; k++){
					maxi = max(maxi,a[k]);
				}
				cout << maxi << " ";
			}
		}
		cout << endl;
	}
	return 0;
}