//pattern 01..
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,row,col;
	cin>>n;
	for(row=n; row>0; row--){
		for(col=1; col<=row; col++){
			cout<<" "<<"*";
		}
		cout<<endl;
	}
}