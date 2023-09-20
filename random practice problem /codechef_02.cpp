#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
	
		if(x<10*y){
			cout<<"NO"<<endl;
		}
		else if(x==10*y){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}