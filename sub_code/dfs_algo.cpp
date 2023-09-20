#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
// vector<vector<int> > g(N);
// vector<bool>vis(N);

void dfs(vector<vector<int> > &g,vector<bool> &vis, int node){
	vis[node]=true;
	cout << node << " ";

	for(auto child : g[node]){
		if(!vis[child]){
			dfs(g,vis,child);
		}
	}
}



int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int node, edge;
	cin>>node>>edge;

 	vector<vector<int> > g(node+1);
 	vector<bool>vis(node+1,false);

	while(edge--){
		int u,v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	cout << "DFS startind value : 1"<<endl;
	dfs(g,vis,1);

	return 0;
}