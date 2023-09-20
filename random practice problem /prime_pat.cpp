#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100];
	int n;
	cin>>n;
	int final = 0;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<=n; i++){
		int n=a[i];
		for(int j=2; j<n; j++){
			if(n%j==0){
				final =1;
				break;
			}
		}
		if(final==0)
			cout<<n<<endl;
	}
	return 0;
}