#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		int a[n];
		long long int rs=1;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<n; i++){
			rs = rs * i;
			rs++;
		}
		if(rs%10==2 || rs%10==3 || rs%10==5){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}