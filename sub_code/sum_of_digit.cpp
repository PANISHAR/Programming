#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
    int sum = 0;
	for(int i=1; i<=n; i++){
		char ch;
		cin >> ch;
		int dig = ch-'0';

		sum+=dig;

	}

	cout << sum << endl;
	return 0;
}