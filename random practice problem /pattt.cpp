#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int pos=0,min;
		for(int i=1; i<=n; i++){
			int k;
			cin>>k;
			pos = max(pos,k-i);
		}
		cout<<pos<<endl;
	}
	return 0;
}