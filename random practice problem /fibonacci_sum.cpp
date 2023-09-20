#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
	if(n==0)return 0;
	if(n==1)return 1;

	return fibo(n-1)+fibo(n-1)+fibo(n-2);
}
int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

cout << fibo(4)<<endl;

return 0;
}