#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int>v(n);
	for(int i=0; i<n; i++){
        //v.push_back(i);
        cin >> v[i];
	}
	sort(v.begin(), v.end());
	for(auto u : v)
		cout << u << " ";
	return 0;
}