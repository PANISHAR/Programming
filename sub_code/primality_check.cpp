// primality check..

#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
	if(n<2)return false;
	if(n<=3)return true;
	for(int i=3; i*i<=n; i+=2){
		if(n%i==0)return false;
		else	
		return true;
		
	}


}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	if(prime(n)){
		cout << "YES"<<endl;
	}
	else{
		cout << "NO"<<endl;
	}
	return 0;
}