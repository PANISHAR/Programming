#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	sort(a,a+n);
	for(int i=0; i<n; i++){
		cout<<a[i]<<endl;
	}


	int left=0,right=n-1,x,mid;
	cin>>x;
	while(left<= right){
		mid=(left+right)/2;
		if(a[mid]==x){
			cout<<mid;
		}
		if(a[mid]< x){
			left = mid+1;
		}
		else{
			right=mid-1;
		}
		cout<<mid;
	}
}