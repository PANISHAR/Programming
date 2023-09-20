#include <iostream>
#include <stack>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        stack<int> bonuses;
        int total_power = 0;
        for (int i = 0; i < n; i++) {
            int s;
            cin >> s;
            if (s == 0) {
                if (!bonuses.empty()) {
                    total_power += bonuses.top();
                    bonuses.pop();
                }
            } else {
                bonuses.push(s);
            }
        }

        cout << total_power << endl;
    }

    return 0;
}
