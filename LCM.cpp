#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long a, b, cnt = 0;
        cin >> a >> b;

        for (int i = 1; i * i <= min(a, b); i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                cnt++;
                int an = min(a, b) / i;
                if (i != an && a % an == 0 && b % an == 0)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
}