#include<bits/stdc++.h>
using namespace std;
void sum(int n){
	if(n==0)return;
	cout << n << " ";
	sum(n-1);
}

int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);
int n;
cin >> n;

 sum(n);

return 0;
}