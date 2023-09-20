#include<bits/stdc++.h>
using namespace std;
#define ll long long

int  solve(int a[],int n){
	int even = 0;
	int odd = 0;
	for(int i=0; i<n; i++){
		if(a[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	if(even>odd){
		for(int i=0; i<n; i++){
			if(a[i]%2!=0){
				return i+1;
				break;
				
			}
		}
	}
	else{
		for(int i=0; i<n; i++){
			if(a[i]%2==0){
				return i+1;
				break;
			}
		}
	}
	return -1;
}

int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
int a[n];
for(int i=0; i<n; i++){
	cin >> a[i];
}
cout <<solve(a,n)<<endl;
return 0;
}