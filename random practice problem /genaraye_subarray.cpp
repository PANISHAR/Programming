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
	int sum=0;
	for(int l=0; l<n; l++){
		for(int r=l; r<n; r++){
			for(int i=l; i<=r; i++){
				sum+=a[i];
				cout << a[i]<<" ";
				
			}
			cout << endl;
		}
	}
	cout << "sum of subArray is : "<<sum<<endl;
	return 0;
}