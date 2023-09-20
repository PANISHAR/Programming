#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,row,col;
	cin>>n;
	for(row=1; row<=n; row++){
		for(col=1; col<=n; col++){
			if(col<=n-row){
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}