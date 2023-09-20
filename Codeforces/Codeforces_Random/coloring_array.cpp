#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        int even_cnt = 0, odd_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (a[i] % 2 == 0)
            {
                odd_cnt++;
            }
            else
            {
                even_cnt++;
            }
        }
        if (sum % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
