/*#include <stdio.h>

int main() {
    int N, x, v;
    scanf("%d", &N);  

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);  
    }

    scanf("%d %d", &x, &v);  

    A[x] = v;  

    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, x, y, v;
    cin >> N;  

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i]; 
    }

    cin >> x >> v;  

    A[x] = v;  

    cin >> y;  
    swap(A[x], A[y]);  

    
    reverse(A.begin(), A.end());
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

