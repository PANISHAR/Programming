#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int pow = 1;
		vector<int>v;
		while(n>0){
			if(n%10!=0){
				v.push_back(n%10 * pow);
			}
			n = n/10;
			pow*=10;
		}
		cout << v.size()<<endl;
		for(int ele : v){
			cout << ele<<" ";
		}
		cout <<endl;
	}
	return 0;
}