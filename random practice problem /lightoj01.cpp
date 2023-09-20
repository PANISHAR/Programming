#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >>t;
  while(t--){
    int n;
    cin >>n;
    vector<int>v(n);
    for(int i=0; i<n; ++i){
      cin >> v[i];
    }
    int cost = 0;
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++){
      int x = n-i-1;
      if(x<i)
        break;
      cost+=v[x]-v[i];
    }
    cout <<cost<<endl;
  }
}