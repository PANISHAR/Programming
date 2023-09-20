#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	int count=0;
	cin>>x;
	int a[]={5,4,3,2,1};
	for(int i=0;i<5; i++){
		count+=x/a[i];
		x=x%a[i];
		

	}
	cout<<count;
}