#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		long long int n,k, sum = 0, j=1;
		long long int t[1000000005];
		cin>>n>>k;
		for(int i=1; i<=n; i++){
			cin>>t[i];
		}

		for(int i=1; i<=n; i++){
			sum = sum + t[i];
		}
		for (int i = 1;i<k; ++i){
			sum = sum + t[n];
		}
		cout<<"Case "<<j<<": "<<sum<<endl;


	}
	return 0;
}