// weighted graph...
// using vector pair..

#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+7;
vector<pair<int,int> > adj[mx];
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int ver,edg;
	cin >> ver >> edg;

	while(edg--){
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].push_back({v,w});
		adj[v].push_back({u,w});
	}

	for(int i=1; i<=ver; i++){
		cout << "adjacent list of "<<i<<": ";
		for(auto u : adj[i])cout << "node : "<<u.first<<" "<<"cost : "<<u.second<<" ";
			cout << endl;
	}
	return 0;
}