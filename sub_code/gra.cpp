// represent using adjacency list..

#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int ver;
	cin >> ver;
	vector<vector<int> > v1(ver+1);

	int edg;
	cin >> edg;
	while(edg--){
		int u,v;
		cin >> u >> v;
		v1[u].push_back(v);
		v1[v].push_back(u);
	}

	for(int i=0; i<ver;i++){
		cout << "edge"<<" "<<i<<"->";
		for(auto child:v1[i]){
			cout << child<<" ";
		}
		cout << endl;
	}
	return 0;
}