#include<bits/stdc++.h>
using namespace std;
int check_kth_bit(int x, int k){
	return (x>>k)&1;
	// check kth bit on or off..
	// if you check the kth bit, then we use (x>>k)&1 this operatoin.
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout <<"The kth bit digit is : "<<check_kth_bit(20,5)<<endl;
	return 0;
}