//leaner  search..

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0; i<n;i++){
		cin>>a[i];
	}
	int x,i;
	cin>>x;
	for(i=0; i<n; i++){
		if(a[i]==x){
			cout<<"YES"<<endl;
			break;
		}
		else{
			cout<<"NO"<<endl;
		
		}
	}
	return 0;
}