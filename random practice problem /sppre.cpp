#include<bits/stdc++.h>
using namespace std;
int linear(int a[],int n, int x){
	for(int i=0; i<n; i++){
		if(a[i]==x){
			return i;
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int val;
	cin>>val;

	cout<<linear(a,n,val)<<endl;
	
	return 0;
}