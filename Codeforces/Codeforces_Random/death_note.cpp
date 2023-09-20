#include <iostream>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int day, page;
    cin >> day >> page;
    int curr_line = 0, cnt = 0, new_val = 0;

    new_val = day + curr_line;
    curr_line = new_val % page;
    cout << cnt << " ";

    return 0;
}