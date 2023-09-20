#include<bits/stdc++.h>
using namespace std;

void solve(){
        int n,s,r,i,w;cin>>n>>s>>r;
        s-=n,r-=n;r++;
        cout<<s-r+1;int b=s-r;
        for(i=0;i<n-1;i++){
                w=min(b+1,r+1);r-=w-1;
                cout<<' '<<w;
        }
        cout<<'\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}