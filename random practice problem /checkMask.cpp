#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n=3;
	int sum=0;
	for(int mask=0; mask<(1<<n);mask++){
		for(int i=0; i<n; i++){
			if(mask & (i<<i)){
				sum+=i;
			}
			cout << sum << endl;
		}
	}
	cout << "the total sum is :"<<sum << endl;
	return 0;
}