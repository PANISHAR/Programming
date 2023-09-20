//insert in string..

#include <bits/stdc++.h>
using namespace std;

  int main() {
  string str = "Hello, codes!";
  string sub = "legendary grandmastar ";
  int len1 = str.length();
  int len2 = sub.length();
  int index = 7;
  string result = "";

  for (int i = 0; i < len1; i++) {
    if (i == index) {
      result += sub;
    }
    result += str[i];
  }

  cout<<result<<endl;
}


