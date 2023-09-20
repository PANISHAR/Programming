#include<iostream>
using namespace std;

const int N = 1e5 + 9; 
int a[N]; 
int main() {
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  bool is_palindrome = true; 
  for (int i = 1; i <= n; i++) {
    int j = n - i + 1; 
    if (a[i] != a[j]) {
      is_palindrome = false;
      break;
    }
  }
  if (is_palindrome) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
  return 0;
}