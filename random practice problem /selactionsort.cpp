#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			int min = a[i];
			if(min<a[j]){
				min=a[j];
				a[i]=a[j];
				a[j]=min;
			}
		}
	}
	for(int j=0; j<n; j++){
		cout<<a[j]<<endl;
	}
	return 0;
}