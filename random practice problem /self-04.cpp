#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int x,y;
	cin>>x>>y;
	for(int i=x; i<=y; i++){
		if(is_prime(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}