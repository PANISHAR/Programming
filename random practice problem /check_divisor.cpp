#include<bits/stdc++.h>
using namespace std;
bool solve(int n){
	int divisor=0;
	for(int i=1; i<=n; i++){
		if(n%i==0){
			divisor++;
		}
	}
	if(divisor==2){
		return true;
	}
	else{
		return false;
	}
}

bool almost_prime(int n){
	int prime_divisor = 0;
	for(int i=1; i<=n; i++){
		if(n%i==0){
			if(solve(i)){
				prime_divisor++;
			}
		}
	}
	if(prime_divisor==2){
		return true;
	}
	else{
		return false;
	}
}
int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

int n;
cin >> n;
//cout << solve(n)<<endl;
// for(int i=1; i<=n; i++){
// 	if(solve(i)){
// 		cout << i << " ";
// 	}
// }
int ans = 0;
for(int i=1; i<=n; i++){
	if(almost_prime(i)){
		ans++;
	}
}
//cout << "the number of prime divisor is : " << ans << endl;
cout << ans << endl;

return 0;
}