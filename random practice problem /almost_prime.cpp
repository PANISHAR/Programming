#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n){
	for(int i=1; i<=n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

bool solve(int n){
	int divisor = 0;
	for(int i=1; i<=n; i++){
		if(n%i==0){
			if(is_prime(i)){
				divisor++;

			}
			
		}
	}
	if(divisor==2){
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
int ans = 0;
for(int i=1; i<=n; i++){
	cout << i << endl;
	if(is_prime(i)){
		ans++;
	}
}
cout  << ans << endl;

return 0;
}