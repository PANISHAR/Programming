#include <iostream>
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
        int a, b;
        cin >> a >> b;
        if (a == 0 || b == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            int res = (a + b) / 3;
            int mn = min(a, b);
            int ans = min(mn, res);
            cout << ans << endl;
        }
        // 	this brouthforece is not work -> cout << floor((long long)(a+b)/3)<<endl;
    }
    return 0;
}