#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int a,b,c;
		cin >> a >> b >> c;
		if(a+b==c || a+c==b || b+c==a){
			cout << "YES"<<endl;
		}
		else{
			cout << "NO"<<endl;
		}
	}
	return 0;
}