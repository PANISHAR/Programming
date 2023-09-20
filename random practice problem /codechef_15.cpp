#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int w,x,y,z;
		cin>>w>>x>>y>>z;
		int current_bal = w+(x-y)*z;
		cout<<current_bal<<endl;
	}
}