#include<bits/stdc++.h>
using namespace std;

string solve(char grid[8][8]) {
    string word = "";
    for (int i = 0; i < 8; i++) {
        char ch = grid[i][0];
        if (ch != '.') {
            word += ch;
        }
    }
    return word;
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
    cin >> t;

    while (t--) {
        char grid[8][8];
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> grid[i][j];
            }
        }

        string word = solve(grid);
        cout << word << endl;
	return 0;
}
}