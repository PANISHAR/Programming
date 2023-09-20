#include<bits/stdc++.h>
using namespace std;
// to find the last bit, we need (x&1) operation.
int check_last_bit(int x){
	return (x&1);
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout << "Last bit of this number is : "<<check_last_bit(100)<<endl;
	return 0;
}