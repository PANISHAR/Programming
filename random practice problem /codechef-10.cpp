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
		int i;
		int num=0;
		for(i=0; i<n;i++){
			cin>>a[i];
		}
		for(i=0; i<n; i++){
			if(a[i]>=1000){
				num++;
			
			}
			
		}
		for(int i=0; i<n; i++){
			cout<<num<<endl;
			break;
		}
	}
}