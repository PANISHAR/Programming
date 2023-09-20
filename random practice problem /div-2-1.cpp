#include<bits/stdc++.h>
using namespace std;
int min(int n, int a[]){
    int res=0;
    sort(a, a+n);
    for(int i=0; i<n; i++){
        res = max(res,a[i]+n-1-1);
    }
    return res;

}