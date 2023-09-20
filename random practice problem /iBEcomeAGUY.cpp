#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int p;
    cin >> p;
    int a[200];
    for(int i=0; i<p; i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    for(int i=p; i<p+q; i++){
        cin >> a[i];

    }
    sort(a,a+(p+q));
    int cnt=0;
    for(int i=0; i<p+q; i++){
        if(a[i]!=a[i+1]){
            cnt++;
        }
    }
    if(cnt == n){
        cout << "I become the guy."<<endl;
    }
    else{
        cout << "Oh, my keyboard!"<<endl;
    }
    return 0;
}