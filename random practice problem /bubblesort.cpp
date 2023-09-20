#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		int min = a[i];
		for(int j=i+1; j<n; j++){
			if(min>a[j]){
				min=a[j];
				temp = j;
			}
		}
		if(min<a[i]){
			a[temp]=a[i];
			a[i]=min;
		}
	}
	for(int i=0; i<n; i++){
		cout<<a[i]<<endl;
	}
	return 0;
}