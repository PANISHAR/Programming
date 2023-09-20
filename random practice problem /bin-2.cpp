#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=6;
	int a[n];
	int i,sum1=0,sum2=0;
	for(i=0; i<n; i++){
		cin>>a[i];
		if(i >= n/2)
			sum1+=a[i];
		
		else
			sum2+=a[i];
		
	}
	if(sum1==sum2){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}