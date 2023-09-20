#include<bits/stdc++.h>
using namespace std;

int check(int a[],int n){
	int cnt=0;
	for(int i=0; i<=n; i++){
		if(a[i]%2==0){
		 return a[i] = a[i]/2;

		}
		
	}
	//return a[i];
	return 0;
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<=n; i++){
		cin >> a[i];
	}

	cout << check(a,n)<<endl;
	

	return 0;
}