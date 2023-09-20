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

	int mn = 1e8;
	for(int i=1; i<=n; i++){
		mn = min(mn,a[i]);
	}

	int freq=0;
	for(int i=1; i<=n; i++){
		if(a[i]==mn){
			freq++;
		}
	}

	if(freq%2==0){
		cout << "Unlucky"<<endl;
	}
	else{
		cout << "Lucky"<<endl;
	}
	return 0;
}