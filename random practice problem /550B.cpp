#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e6+7;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,l,r,x;
	int set[MAX];
	int mx=-1;
	int mn = 1e9;
	while(cin >> n>>l>>r>>x){
		for(int i=0; i<n; i++){
			cin >> set[i];
		}
		int sum=0;
		int cnt=0;
		for(int mask=0; mask<(1<<n); mask++){
			for(int i=0; i<n; i++){
				if(mask & (1<<i)){
					sum+=set[i];
					mx = max(mx,set[i]);
					mn = min(mn,set[i]);
				}
			}
			if(l<=sum && sum<r && (mx-mn)>=x){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}