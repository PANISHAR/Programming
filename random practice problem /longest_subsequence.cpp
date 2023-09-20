
// longest subsequene string..
// using tabulation approch..

#include<bits/stdc++.h>
using namespace std;


int main()
{
    freopen ("input_custom.txt", "r", stdin);
    freopen ("output_custom.txt", "w", stdout);
    string s1 = "joyshib";
    string s2 = "apurboshib";
    int m = s1.size();
    int n = s2.size();
    // cout << m << n << endl;
    int LCS_table[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 or j == 0)
            {
                LCS_table[i][j] = 0;
            }
            else if (s1[i - 1] == s2[j - 1])
            {
                LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
                // cout << i << " " << j;
            }
            else
            {
                LCS_table[i][j] = max(LCS_table[i - 1][j], LCS_table[i][j - 1]);
            }
        }
    }
    cout << LCS_table[m][n] << endl;
    int LCS_string_size = LCS_table[m][n];
    cout << LCS_string_size << endl;

    char LCS_string[LCS_string_size + 1];
    LCS_string[LCS_string_size] = '\0';
    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            LCS_string[LCS_string_size - 1] = s1[i - 1];
            // cout << LCS_string[LCS_string_size - 1];
            i--;
            j--;
            LCS_string_size--;
        }
        else if (LCS_table[i - 1][j] >= LCS_table[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    for (int k = 0; k < LCS_table[m][n]; k++)
    {
        cout << LCS_string[k];
    }
}