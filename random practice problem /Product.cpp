#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b;
	cin >> a >>b;
	int res = a*b;
	cout << res<<endl;
	if(res%2==0){
		cout << "Even"<<endl;
	}
	else{
		cout << "Odd"<<endl;
	}
	return 0;
}