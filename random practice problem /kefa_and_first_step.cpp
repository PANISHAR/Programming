#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
    cin >>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int cnt=0;
    int mx=1;
    for(int i=0; i<n; i++){
        if(a[i]>=a[i-1]){
            cnt++;
            mx = max(mx,cnt);
        }
        else{
            cnt=1;
        }
    }
    cout << mx << endl;
	return 0;
}