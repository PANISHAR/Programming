#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}

		int ans = -1;
		for(int i=0; i<n-1; i++){
			int left = 1, right=1;
			for(int j=0; j<=i; j++){
				left = left * a[j];
			}
			for(int j=i+1; j<n; j++){
				right = right * a[j];
			}
			if(left == right){
				ans = i+1;
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}