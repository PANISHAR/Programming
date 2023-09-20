#include<bits/stdc++.h>
using namespace std;

int bubble(int a[],int n){
	int i,j;
	for(i=1; i<=n; i++){
		for(j=1;j<n; j++){
			if(a[j+1]>a[j]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				return j;
				
			}
			
		
		
		}
		return -1;
			
}
}
	
	int main()
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=1; i<=n; i++){
			cin>>a[i];
		}
		cout<<bubble(a,n)<<endl;
	}


	