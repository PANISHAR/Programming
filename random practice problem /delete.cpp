#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int pos;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		if(i== pos-1){
			for(int j=0; j<n; j++){
				a[j]=a[j+1];
			}
			
				break;
			}
			
		}
	}
	for(int i=0; i<n; i++){
		cout<<a[i]<<endl;
	}
	return 0;
}