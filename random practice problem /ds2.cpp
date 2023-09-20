//add value on array..

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
	int ind,val;
	cin>>ind>>val;
	int i;

	for(i=0; i<n; i++){
		if(i==ind){
			a[ind]=val;
		}
			}
	for(int i=0; i<n; i++){
		cout<<a[i]<<endl;
	}
	return 0;

}