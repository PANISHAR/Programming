#include <bits/stdc++.h>
using namespace std;
int max_way(int coin[], int m, int v)
{
    vector<vector<int>> dp(m + 1, vector<int>(v + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j <= v; j++)
        {
            dp[i][j] += dp[i - 1][j];
            if (j - coin[i - 1] >= 0)
            {
                dp[i][j] += dp[i][j - coin[i - 1]];
            }
        }
    }
    return dp[m][v];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int coin[] = {2, 3, 4, 5};
    int m = sizeof(coin) / sizeof(coin[0]);
    int v = 11;
    cout << max_way(coin, m, v) << endl;
}