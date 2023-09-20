// jodi amra kno ekta code already kore thaki tahole seta aar korbo na.
// seta momo te save rakhbo

#include<bits/stdc++.h>
using namespace std;
int memo[100];

int power_of_two(int n){
	if(n==0)return 1;

	
	if(memo[n]!=-1)return memo[n];
	// check korbo je -1 er (==) kina
	// if (==) taile memo[n] return hbe
	
	memo[n] = power_of_two(n-1) + power_of_two(n-1); // memo[n] eh operation ta store rakhlam
	return memo[n]; // return korlam
}

int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

int n=5;

for(int i=0; i<=n; i++){
	memo[i] = -1; // initially amra dhore nibo je amader memo te -1 ache.
}
cout <<power_of_two(n)<<endl;

return 0;
}
// comolexity O(n).