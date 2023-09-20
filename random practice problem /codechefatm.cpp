#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int sum1=0,sum2=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		if(i>=(n/2)){
			sum1+=a[i];
		}
		else{
			sum2+=a[i];
		}
	}
		if(sum1==sum2){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	
	return 0;
}