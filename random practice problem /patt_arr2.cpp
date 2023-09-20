//2D array input and output..
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
	int sum = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			sum = sum + a[i][j];
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"the sum is :"<<sum;
}