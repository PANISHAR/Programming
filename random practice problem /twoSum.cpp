#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
char num[N];
int main() {
 
  cin >> num;
  int len = strlen(num);
  
  if (len == 1) {
    cout << 0 << '\n';
    return 0;
  }


  int sum = 0;
  for (int i = 0; i < len; i++) {
    sum += num[i] - '0';
  }
  int cnt = 1; 

  
  int curr_num = sum;

  while (curr_num > 9) { 
    int sum = 0;
    while (curr_num > 0) {
      int last_dig = curr_num % 10;
      sum += last_dig;
      int x = curr_num / 10;
      curr_num = x;
    }

    curr_num = sum;
    ++cnt;
  }
  cout << cnt << '\n';
  return 0;
}