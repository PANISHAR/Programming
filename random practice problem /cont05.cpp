#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        unordered_map<string, int> counter;
        for (int i = 0; i < n-1; i++) {
            string result = s.substr(0, i) + s.substr(i+2);
            counter[result]++;
        }

        cout << counter.size() << endl;
    }

    return 0;
}
