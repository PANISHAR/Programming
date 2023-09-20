#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	int x;
	cin>>x;
	for(i=0; i<n; i++){
		if(a[i]==8){
			cout<<"match"<<endl;
			break;
		}
		else{
			cout<<"not found";
			break;
		}
	}
	return 0;
}