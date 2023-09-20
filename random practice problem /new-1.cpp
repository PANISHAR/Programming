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

	int sum=0;
	int i;

	for(int i=0; i<n; i++){
		sum = sum+a[i];
	
	if(sum%a[i]==0){
		cout<<"YES";
		break;
		
	}
	else{
		cout<<"NO";
		break;
		
	}
}
	return 0;
}