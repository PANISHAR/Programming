#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i;
	for(int i=2; i<n; i++){
		if(n%i==0){
			break;
		}
	}
	if(i==n){
		cout<<i<<endl;
	}
	return 0;
}