#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int set[n];
	for(int i=0; i<n; i++){
		cin >> set[i];
	}
	int sum=0;
	int t_sum=9;
	for(int mask=0; mask<(1<<n); mask++){
		for(int i=0; i<n; i++){
			if((mask>>i)&1){
				sum+=i;

			}
		}
	}
	cout << sum <<endl;
	if(sum==t_sum){
		cout <<"yes"<<endl;
	}
	else{
		cout << "no"<<endl;
	}
	return 0;
}