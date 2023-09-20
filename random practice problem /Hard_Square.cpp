#include<bits/stdc++.h>
using namespace std;

int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

int n;
cin >> n;
for(int i=1; i<=n; i++){
	for(int j = 1; j<=n; j++){
		if(i==1 or i==n){
			cout << "* ";
		}
		else if (j==1 or j==n){
			cout << "* ";
		}
		else{
			cout << "  ";
		}
	}
	cout << endl;
}

return 0;
}