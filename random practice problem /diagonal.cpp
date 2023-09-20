#include<bits/stdc++.h>
using namespace std;
#define N 100
int solve(int a[][N],int n){
    int sum=0,sum1=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                sum+=a[i][j];
            }
            if(i==n-j-1){
                sum1+=a[i][j];
            }
        }
    }
    return abs(sum-sum1);
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[N][N];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    cout << solve(a,n)<<endl;
    return 0;
}