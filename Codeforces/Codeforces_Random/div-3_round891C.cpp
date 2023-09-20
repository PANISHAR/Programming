#include <iostream>
using namespace std;
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

        int N = n * (n - 1) / 2;
        vector<int> v(N);

        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        vector<int> v1(n);
        v1[0] = v[N - 1];
        for (int i = 1; i < n; i++)
        {
            v1[i] = v[N - (i + 1) * i / 2];
        }

        for (int i = 0; i < n; i++)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
    }
    return 0;
}