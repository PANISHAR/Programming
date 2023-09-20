// Fractional Knapsack Problem using a greedy algorithm..

#include<bits/stdc++.h>
using namespace std;

struct item {
    int profit, weight;
};

bool comp(item a, item b) {
    if (b.weight == 0) return false;  // Avoid division by zero
    if (a.weight == 0) return true;   // Avoid division by zero
    double pw1 = (double)a.profit / a.weight;
    double pw2 = (double)b.profit / b.weight;
    return (pw1 > pw2);
}

double fracknapsack(int b, item arr[], int size) {
    sort(arr, arr + size, comp);
    double totalProfit = 0.0;

    for (int i = 0; i < size; i++) {
        if (arr[i].weight <= b) {
            b -= arr[i].weight;
            totalProfit += arr[i].profit;
        } else {
            totalProfit += (double)arr[i].profit * ((double)b / (double)arr[i].weight);
            break;
        }
    }
    return totalProfit;
}

int main() {
    int b = 50;
    item arr[] = {{60, 10}, {100, 20}, {120, 30}};
    cout << "Maximum total profit: " << fracknapsack(b, arr, 3) << endl;
    return 0;
}
