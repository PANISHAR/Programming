#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n+1];
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}

	int mx = -1e9;
	int mx_pos = -1;
	int mn = 1e9;
	int mn_pos = -1;

	for(int i=1; i<=n; i++){
		if(a[i]<mn){
			mn = a[i];
			mn_pos = i;
		}
	}

	for(int i=1; i<=n; i++){
		if(a[i]>mx){
			mx = a[i];
			mx_pos = i;
		}
	}

	swap(a[mx_pos],a[mn_pos]);

	for(int i=1; i<=n; i++){
		cout << a[i]<< " ";
	}
	cout << endl;


	return 0;
}