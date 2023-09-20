#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i=2; i<=sqrt(n);i++){
		if(n%i==0){
			cout << "it's not a prime number"<<endl;
			break;
		}
		else{
			cout << " prime number"<<endl;
			break;
		}
	}
	return 0;
}