#include<bits/stdc++.h>
using namespace std;

int main(){
    int r1,c1;
    int r2,c2;
    cin >> r1 >> c1;
    cin >> r2 >> c2;
    int a[r1][c1],b[r2][c2];
    int res[r1][c2];

    for(int i=0; i<r1; ++i){
        for(int j=0; j<c1; ++j){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<r2; ++i){
        for(int j=0; j<c2; ++j){
            cin >> b[i][j];
        }
    }
    for(int i=0; i<r1; ++i){
        for(int j=0; j<c2; ++j){
            res[i][j] = a[i][j]-b[i][j];
        }
        
    }
    for(int i=0; i<r1; ++i){
        for(int j=0; j<c2; ++j){
            cout << res[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}