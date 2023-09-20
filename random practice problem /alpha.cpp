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
	int mini = 1e6;
	int cnt=0;
	for(int i=1; i<=n; i++){
		mini=min(mini,a[i]);
	}
	for(int i=1; i<=n; i++){
		if(a[i]==mini){
			cnt++;
		}
	}
	if(cnt%2==1){
		cout <<"Lucky"<<endl;
	}
	else{
		cout << "Unlucky"<<endl;
	}
	return 0;
}