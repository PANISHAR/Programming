#include<bits/stdc++.h>
using namespace std;
bool lins(int a[],int n,int x){
	for(int i=0; i<n; i++){
		if(a[i]==x){
			return true;
		}
	}
	return false;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	int x;
	cin>>x;
	cout<<lins(a,n,x);
}