#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,row,col;
	cin>>n;
	for(row=1; row<=n; ++row){
		int k = row;
		for(col=1; col<=n-row; ++col){
			cout<<" ";
		}
			for(col=1; col<=n; ++col){
				cout<<k<endl;
				k--;

			}
			k=1;
			for(; col<(n+row); ++col){
				k++;
				cout<<k<<endl;
			}
			for(col=1; col<=(2*row-1); ++col){
				cout<<" ";
			}
			cout<<endl;
		}
		
	
	return 0;
}