#include<bits/stdc++.h>
using namespace std;

int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

int n;
cin >> n;
for(int row=1; row<=n; row++){
	for(int col = 1; col<=row; col++){
		cout << "*";
	}
	cout << endl;
}

return 0;
}