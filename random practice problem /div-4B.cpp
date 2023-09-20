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
		int cnt=0;
		for(int i=1; i<n; i++){
			cin>>a[i];
		}

		for(int i=1; i<n; i++){
			
		cnt = a[i]- a[0];
		cnt++;
		
			
		}
		cout<<cnt<<endl;
	}
	return 0;
}