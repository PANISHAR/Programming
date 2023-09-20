#include <iostream>
#include<cmath>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mx = -1;
        vector<int> v(1001, 0);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v[x] = i;
        }

        for (int i = 1; i <= 1000; i++)
        {
            for (int j = 1; j <= 1000; j++)
            {
                if (v[i] > 0 && v[j] > 0)
                {
                    if (__gcd(i, j) == 1)
                    {
                        mx = max(mx, v[i] + v[j]);
                    }
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}