#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,row,col;
	cin>>n;
	for(row=1; row<=n; ++row){
		for(col=1; col<=row; ++col){
			if((row+col)%2==0){
				cout<<" "<<"1";
			}
			else{
				cout<<" "<<"0";
			}
		}
		cout<<endl;
	}
	return 0;
}