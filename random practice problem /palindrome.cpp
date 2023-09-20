#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5+9;
int32_t main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int a[N];
  for(int i=1; i<=n; i++){
    cin >> a[i];
  }
  bool palindrome = true;
  for(int i=1; i<=n; i++){
    int j = n-i+1;
    if(a[i]!=a[j]){
      palindrome = false;
      break;
    }
  }
  if(palindrome){
    cout <<"YES"<<endl;
  }
  else{
    cout << "NO"<<endl;
  }
  return 0;
}