#include<bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
        cin >> n;
        ll sum=0;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        if(sum%2==0)
            cout<<sum<<endl;

        else
        {
            sort(a,a+n);
            for(int i=0;i<n;i++)
            {
                if((sum-a[i])%2==0)
                {
                    cout<<sum-a[i]<<endl;
                    break;
                }
            }
        }

    return 0;
}