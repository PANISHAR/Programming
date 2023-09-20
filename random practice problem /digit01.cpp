#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

int n;
cin >> n;
if(n%2!=0){
	n = ((n-1)/2+1);
}
else{
	n = n/2;
}
cout <<  n << endl;

return 0;
}