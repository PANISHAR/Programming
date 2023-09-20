#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  map<string, int> usernames;

  for (int i = 0; i < n; i++) {
    string username;
    cin >> username;

    if (usernames.count(username) == 0) {
      usernames[username] = 1;
      cout << "OK" << endl;
    } else {
      int j = 1;
      string new_username = username;
      while (usernames.count(new_username) != 0) {
        new_username = username + to_string(j);
        j++;
      }

      usernames[new_username] = 1;
      cout << new_username << endl;
    }
  }

  return 0;
}