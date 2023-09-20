#include<bits/stdc++.h>
using namespace std;
void print(int n){
	if(n==0)return;
	cout << "I love Recursion"<<endl;
	print(n-1);
}

int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);
int n;
cin >> n;
print(n);


return 0;
}