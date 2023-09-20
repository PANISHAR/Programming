#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	
	int a[n];
	int sum=0;
	//int o_sum=0;
	for(int i=0; i<n; i++){
		cin >>a[i];
	}
	for(int i=0; i<n;i++){
		if(i%2==0){
			sum+=a[i];
		}
		else{
			sum-=a[i];
		}
	}
	cout <<sum;
}