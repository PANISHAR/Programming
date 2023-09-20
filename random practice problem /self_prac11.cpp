//pattern 05
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=1;
	cin>>n;
	int row,col;

	for(row=1; row<=n; row++){
		for(col=1; col<=row; col++){
			cout<<" "<<count;
			count++;

		}
		cout<<endl;
	}
}