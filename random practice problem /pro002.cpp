#include<bits/stdc++.h>
using namespace std;
int second_max(int a[], int n){
    int mx = INT_MIN;
    int smx = INT_MIN;
    for(int i=0; i<n; ++i){
        if(a[i]>mx){
            mx = a[i];
        }
    }
    for(int i=0; i<n; ++i){
        if(a[i]>smx && a[i]!=mx){
            smx = a[i];
        }
    }
    return smx;
}

int main(){
    int size;
    cin >> size;
    int a[size];
    for(int i=0; i<size; ++i){
        cin >> a[i];
    }
    cout << second_max(a,size)<<endl;
}