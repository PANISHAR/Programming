#include<iostream>
#include <climits> 
using namespace std;

int main() {
  int n; cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int minimum_number = INT_MAX;
  for (int i = 1; i <= n; i++) {
    minimum_number = min(minimum_number, a[i]);
  }
  int position_of_minimum = -1;
  for (int i = 1; i <= n; i++) {
    if (a[i] == minimum_number) {
      position_of_minimum = i;
      break; 
    }
  }
  cout << minimum_number << ' ' << position_of_minimum << '\n';
  return 0;
}