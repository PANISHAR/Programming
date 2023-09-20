#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
    int n=4;
    int a[n];
    for(int i=0; i<n; i++){
        cin >>a[i];
    }

    int mx = max(a[0],a[1]);
    int mx2 = max(a[2],a[3]);
    int mn = min(a[0],a[1]);
    int mn2 = min(a[2],a[3]);
    if(mn > mx2 || mx < mn2)
        cout<<"NO"<<endl;
    else
        cout << "YES"<<endl;
}
    return 0;

}