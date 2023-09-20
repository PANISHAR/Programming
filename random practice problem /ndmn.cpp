#include<bits/stdc++.h>
using namespace std;
int32_t main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    bool found = false;
    for (int j = 0; j < 3; j++) {
      for (int k = j + 1; k < 3; k++) {
        if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
          found = true;
          break;
        }
      }
      if (found) {
        break;
      }
    }

        if (found) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}