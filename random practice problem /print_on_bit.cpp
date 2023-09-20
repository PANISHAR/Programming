#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        int n = b / 2;
        ll allsum = n * (n + 1);
        int beforea = (a-1) / 2;
        ll beforeasum = beforea * (beforea + 1);
        cout << allsum - beforeasum << endl;
    }

    return 0;
}