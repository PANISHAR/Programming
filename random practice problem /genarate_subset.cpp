#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int sum=0;
	for(int mask=0; mask<(1<<n); mask++){
		for(int i=0; i<n; i++){
			if((mask>>i)&1){
				sum+=a[i];
				cout <<a[i]<<" ";
			}
		}
		cout <<endl;
	}
	cout << "Sum of SubSet is : "<<sum<<endl;
	return 0;
}