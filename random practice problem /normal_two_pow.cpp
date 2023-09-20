#include<bits/stdc++.h>
using namespace std;
int pow_of_two(int n){
	if(n==0)return 1;
	return pow_of_two(n-1)+pow_of_two(n-1);
}
int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

cout <<pow_of_two(5)<<endl;

return 0;
}