// implement a undirected graph using adjacency matrix...
// using 2D array..

#include<bits/stdc++.h>
using namespace std;
#define max 1002
int32_t main(){
int adj[max][max];
ios_base::sync_with_stdio(0);
cin.tie(0);
	int node,edge;
	cin >> node>>edge;

	while(edge--){
		int ve,e;
		cin >> ve >> e;
		adj[ve][e]=1;
		adj[e][ve]=1;
	}

	for(int i=0; i<node; i++){
		for(int j=0; j<node; j++){
			cout <<adj[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}