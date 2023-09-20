// dfs  

#include<bits/stdc++.h>
using namespace std;
#define white 1 // initially all node are white
#define gray 2 // after visit it will gray
#define black 3// after finish work it will black
int adj[100][100];
int color[100];

int node,edge;
// visit function..
void dfsVisit(int x){
	color[x]=gray;
	for(int i=0; i<node; ++i){
		//check neighbor node 
		if(adj[x][i]==1){

			if(color[i]==white){
				dfsVisit(i);
			}
		}
	}
	color[x] = black;
}
void dfs(){
	for(int i=0; i<node; ++i){
		color[i]=white;
	}
	for(int i=0; i<node; i++){
		if(color[i]==white){
			dfsVisit(i);
		}
	}
}

int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);
int n1,n2;
for(int i=0; i<edge; ++i){
	cin >> n1 >> n2;
	adj[n1][n2]=1;
	adj[n2][n1]=1;
}

dfs();


return 0;
}