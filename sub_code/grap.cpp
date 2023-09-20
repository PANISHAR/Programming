// adjacent list...

#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+7;
vector<int>adj[mx];
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	while(m--){
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);

	}

	for(int i=0; i<n; i++){
		cout << "adjacent"<<i<<": ";
		for(auto u : adj[i])cout << u <<" ";
			cout << endl;
	}
	
	return 0;
}