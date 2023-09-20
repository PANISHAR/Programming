#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string word, song;
    for (int i = 0; i < s.length(); i++) {
        if (s.substr(i, 3) == "WUB") {
            i += 2;
            if (!word.empty()) {
                song += word + " ";
                word = "";
            }
        }
        else {
            word += s[i];
        }
    }

    if (!word.empty()) {
        song += word;
    }

    cout << song << endl;
    return 0;
}
