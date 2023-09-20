// #include<bits/stdc++.h>
// using namespace std;

// int32_t main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// freopen ("input_custom.txt", "r", stdin);
// freopen ("output_custom.txt", "w", stdout);

// int k,s;
// cin >> k >> s;
// int ans = 0;
// for(int x = 0; x<=k; x++){
// 	for(int y = 0; y<=k; y++){
// 		for(int z = 0; z<=k; z++){
// 			if(x+y+z==s){
// 				ans++;
// 			}
// 		}
// 	}
// }
// cout << ans << endl;

// return 0;
// }

// in this code complexoty is O(n^3)..
// which is not run in 1 second..
// so we need better soln for solve this problem.

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

int k,s;
cin >> k >> s;
int ans = 0;
for(int i=0; i<=k; i++){
	for(int j=0; j<=k; j++){
		int l = s-i-j;
		if(l>=0 && l<=k){
			++ans;
		}
	}
}
cout << ans << endl;

return 0;
}


// this complexity is O(n^2)..