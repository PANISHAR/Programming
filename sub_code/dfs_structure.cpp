/*#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
vector<int>g[N];
bool vis[N];

void dfs(int vertex){
	// take action on vertex after entering the vertex..
	cout << vertex<<endl;

	vis[vertex]=true;
	//if(vis[vertex])return; // jodi enter korrar somoy dekhte cai eta visited kina.
	// vis[vertex]=true;
	for(int child : g[vertex]){
		cout << "parent : "<<vertex<<" "<<"child : "<<child<<" ";
		//take action on child before entering the child node..
		if(vis[child])continue;// jodi enter kore dekhi visited taile skip korbe.


		dfs(child);
	}
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
vector<int> g[N];
bool vis[N];

void dfs(int vertex){
    cout << vertex << " ";
    vis[vertex] = true;
    
    for(int child : g[vertex]){
        if(!vis[child]){
            //cout << "parent : " << vertex << " " << "child : " << child <<endl;
            dfs(child);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int nodes, edges;
    cin >> nodes >> edges;

    for(int i = 0; i < edges; ++i){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u); // Assuming an undirected graph
    }

    // Starting DFS from node 1
    dfs(1);
    
    return 0;
}
