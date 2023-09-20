#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b;
	int t;
	cin >> t;
	while(t--){
	cin >> a >>b;
	if(a==b){
		cout << "Square"<<endl;
	}
	else{
		cout << "Rectangle"<<endl;
	}
}
	return 0;
}