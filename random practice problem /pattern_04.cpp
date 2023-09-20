#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,row,col;
	int count =1;
	cin>>n;
	for(row=1;row<=n;row++){
		for(col=1; col<=row; col++){
			cout<<" "<<count;
			count++;
		}
		cout<<endl;
	}
}