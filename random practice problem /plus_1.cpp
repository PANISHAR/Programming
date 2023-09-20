#include<bits/stdc++.h>
using namespace std;
#include <iomanip>
int solve(int a[], int n){
	int pos=0,neg=0,zero=0;
	for(int i=0; i<n; i++){
		if(a[i]==0){
		zero++;
			
		}
		else if(a[i]>0){
			pos++;
		}
		else{
			neg++;
		}
	}
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	return 0;
}