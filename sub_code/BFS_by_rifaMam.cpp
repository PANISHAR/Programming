// bfs code..
// using queue..

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void bfs(vector<vector<int> >&graph, int start, vector<bool>&visited){
    queue<int>q;
    visited[start]=true;
    q.push(start);
    while(!q.empty()){
        int current=q.front();
        q.pop();
        cout<<"visited: "<<current<<endl;
        for(int neighbor : graph[current]){
            if(!visited[neighbor]){
                visited[neighbor]=true;
                q.push(neighbor);
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int numVertices;
    cout<<"Enter the number of vertices: "<<endl;
    cin>>numVertices;
    vector<vector<int> >graph(numVertices);
    int edges;
    cin>>edges;
    for(int i=0;i<edges;i++){
        int source,dest;
        cin>>source>>dest;
        graph[source].push_back(dest);
        graph[dest].push_back(source);
    }
    vector<bool>visited(numVertices,false);
    bfs(graph,1,visited);
}