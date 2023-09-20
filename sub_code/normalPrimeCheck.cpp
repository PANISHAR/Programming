#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
	for(int i=2; i<n; i++){
		if(n%i==0)
			return false;
		
		
		
	}
	return true;
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	if(prime(n)){
		cout << "Prime";
	}
	else{
		cout << "NOT prime";
	}
	return 0;
}