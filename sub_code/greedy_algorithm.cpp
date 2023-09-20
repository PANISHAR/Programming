//Activity Selection Problem using the Greedy Algorithm.

#include<bits/stdc++.h>
using namespace std;

struct activity {
    int start, finish;
};

bool finishtime(activity a, activity b) {
    return (a.finish < b.finish);
}

int ac(activity arr[], int size) {
    sort(arr, arr + size, finishtime);
    int i = 0;
    cout << i << " ";
    int count = 1;  // Start with the first activity

    for (int j = 1; j < size; j++) {
        if (arr[j].start >= arr[i].finish) {
            cout << j << " ";
            i = j;
            count++;
        }
    }
    
    return count;  // Return the count of selected activities
}

int main() {
    activity arr[] = {{1, 4}, {2, 3}, {5, 7}};
    int size = 3;
    int selectedActivities = ac(arr, size);
    cout << "\nTotal selected activities: " << selectedActivities << endl;
    return 0;
}
