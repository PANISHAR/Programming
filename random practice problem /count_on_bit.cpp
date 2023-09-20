#include<bits/stdc++.h>
using namespace std;
int check_kth_bit(int x, int k){
	return (x>>k)&1;
}
int count_on_bit(int x){
	int cnt=0;
	for(int i=0; i<32; i++){
		if(check_kth_bit(x,i)){
			cnt++;
		}
	}
	return cnt;
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout << count_on_bit(7)<<endl;
	return 0;
}