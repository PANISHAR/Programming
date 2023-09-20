#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> v(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  int x; 
  cin >> x;
  v.erase(v.begin() + x);
  int a, b; 
  cin >> a >> b;
  v.erase(v.begin() + a, v.begin() + b);
  cout << (int)v.size()-1 << endl;
  for (int i = 1; i < v.size(); i++) {
    cout << v[i] << ' ';
  }
  cout << endl;
  return 0;
}