#include<bits/stdc++.h>
using namespace std;

long long int t[100000000];
int main(){
	int T;
	cin>>T;
	int j=1;

	while(T--){
		 int n,k, sum = 0; 
		int ans =0;

		cin>>n>>k;
		for(int i=1; i<=n; i++){
			cin>>t[i];
		}

		for(int i=1; i<=n; i++){
			sum = sum + t[i];

		}
		for (int i = 1;i<k; i++){
			

			sum = sum + t[n];
			ans=max(sum,t);

		}

     	cout<<"Case "<<j<<": "<<(k-1)*ans + n<<endl;
		j++;


	}
	return 0;
}