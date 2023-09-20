
// find the neighbor node of the graph...

#include<bits/stdc++.h>
using namespace std;
int adj[100][100];

int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

int node,edge;
cin >> node>>edge;
int n1,n2;

for(int i=0; i<edge; ++i){
	cin >> n1 >> n2;
	adj[n1][n2]=1;
	adj[n2][n1]=1;
}
int cnt=0;
for(int i=0; i<node; i++){
	if(adj[3][i]==1){
		cnt++;
		cout << i << " ";
	}
}
cout <<endl;
cout << cnt << endl;
return 0;
}