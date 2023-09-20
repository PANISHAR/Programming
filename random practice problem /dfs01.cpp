#include<bits/stdc++.h>
using namespace std;

#define white 1 // initially all nodes are white
#define gray 2 // after visit, it will be gray
#define black 3 // after finishing work, it will be black

int adj[100][100];
int color[100];

int node, edge;

// visit function..
void dfsVisit(int x) {
    color[x] = gray;
    //cout << x << " "; // Print the node being visited
    for (int i = 0; i < node; ++i) {
        // check neighboring nodes
        if (adj[x][i] == 1) {
            if (color[i] == white) {
                dfsVisit(i);
            }
        }
    }
    color[x] = black;
}

void dfs() {
    for (int i = 0; i < node; ++i) {
        color[i] = white;
    }
    for (int i = 0; i < node; i++) {
        if (color[i] == white) {
            dfsVisit(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("input_custom.txt", "r", stdin);
    freopen("output_custom.txt", "w", stdout);

    cin >> node >> edge; // Read the number of nodes and edges

    int n1, n2;
    for (int i = 0; i < edge; ++i) {
        cin >> n1 >> n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    dfs();
    for(int i=0; i<node; i++){
        cout << node<< " ";
    }

    return 0;
}
