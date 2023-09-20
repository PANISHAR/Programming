//gcd code....

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,gcd;
		int x;
		cin>>n>>m;
		if(n<m){
			 x = n;
		}
		else{
			 x=m;
		}
		for(; x>=1; x--){
			if(n%x==0 && m%x==0){
				gcd=x;
				break;
			}
		}
		cout<<gcd<<endl;
	}
	return 0;

}