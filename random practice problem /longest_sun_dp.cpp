
// longest subsequene string..
// using dp approch..

#include <bits/stdc++.h>
using namespace std;

int LCS(char *s1, char *s2, int m, int n, vector<vector<int> > &dp)
{

    if (m == 0 or n == 0)
    {
        return 0;
    }

    if (s1[m - 1] == s2[n - 1])
    {
        return dp[m][n] = 1 + LCS(s1, s2, m - 1, n - 1, dp);
    }
    if (dp[m][n] != -1)
    {
        return dp[m][n];
    }
    return dp[m][n] = max(LCS(s1, s2, m - 1, n, dp), LCS(s1, s2, m, n - 1, dp));
}

void print(char *s1, char *s2, int m, int n, vector<vector<int> > &dp)
{
    int i = m, j = n;
    string LCS;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            LCS = s1[i - 1] + LCS;
            i--;
            j--;
        }
        else if (dp[i - 1][j] >= dp[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    cout << LCS << endl;
}

int main()
{
    freopen ("input_custom.txt", "r", stdin);
    freopen ("output_custom.txt", "w", stdout);

    char s1[] = "joyshib";
    char s2[] = "apurboshib";
    int m = strlen(s1);
    int n = strlen(s2);
    vector<vector<int> > dp(m + 1, vector<int>(n + 1, -1));
    cout << LCS(s1, s2, m, n, dp)<<endl;
    print(s1, s2, m, n, dp);
}