#include<bits/stdc++.h>
using namespace std;
int32_t main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    vector<pair<int, int>> res(n);
    for (int j = 0; j < n; j++) {
      cin >> res[j].first >> res[j].second;
    }

    
    int win = -1;
    int q = -1;
    for (int j = 0; j < n; j++) {
      if (res[j].first <= 10 && res[j].second > q) {
        win = j;
        q = res[j].second;
      }
    }

   
    cout << win + 1 << endl;
  }
  return 0;
}