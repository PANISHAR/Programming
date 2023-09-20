//pattern 04
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int row,col;
	for(row=1; row<=n; row++){
		for(col=1; col<=row; col++){
			cout<<" "<<row;
		}
		cout<<endl;
	}
}