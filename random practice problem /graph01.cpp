// graph implementation..

#include<bits/stdc++.h>
using namespace std;
int adj[100][100]; // we declare this array globally .
int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

int node,edge;
cin >> node>>edge;
int n1,n2;
for(int i=0 ; i<edge; i++){
	cin >> n1 >> n2;
	adj[n1][n2] = 1;
	adj[n2][n1] = 1;


}

for(int i=0; i<node; ++i){
	for(int j=0; j<node; ++j){
		cout << adj[i][j]<<"  ";
	}
	cout << endl;
}

return 0;
}