//inseart sort..

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],x;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n; i++){
		x=a[i];

		int j=i-1;

		while(j>=0 && a[j]>x){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}

	for(int i=0; i<n; i++){
		cout<<a[i]<<endl;
	}
	return 0;
}