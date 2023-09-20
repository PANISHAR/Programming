#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,row,col;
	cin>>n;
	for(row=1; row<=n; row++){
		for(col=1; col<=(n+1)-row; col++){
			cout<<" "<<col;
		}
		cout<<endl;
		
	}
	
}