#include<bits/stdc++.h>
using namespace std;

#define v 4

int minimumcost(int cost[], bool mstset[]) {
    int min = INT_MAX;
    int min_index;
    for (int i = 0; i < v; i++) {
        if (mstset[i] == false && cost[i] < min) {
            min = cost[i];
            min_index = i;
        }
    }
    return min_index;
}

void printmst(int parent[v], int graph[v][v]) {
    cout << "Edge \t Cost" << endl;
    for (int i = 1; i < v; i++) {
        cout << parent[i] << " -> " << i << "\t" << graph[i][parent[i]] << "\n";
    }
}

void primsmst(int graph[v][v]) {
    int parent[v], cost[v];
    bool mstset[v];

    for (int i = 0; i < v; i++) {
        cost[i] = INT_MAX;
        mstset[i] = false;
    }

    cost[0] = 0;
    parent[0] = -1;

    for (int i = 0; i < v - 1; i++) {
        int u = minimumcost(cost, mstset);
        mstset[u] = true;

        for (int j = 0; j < v; j++) {
            if (graph[u][j] && mstset[j] == false && graph[u][j] < cost[j]) {
                parent[j] = u;
                cost[j] = graph[u][j];
            }
        }
    }
    printmst(parent, graph);
}

int main() {
    int graph[v][v] = {{0, 1, 2, 1}, {1, 0, 1, 2}, {2, 1, 0, 2}, {1, 3, 2, 0}};
    primsmst(graph);
    return 0;
}
