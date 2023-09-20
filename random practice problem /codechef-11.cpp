#include<bits/stdc++.h>
using namespace std;
int add;
int main()
{
	int t;
	while(cin>>t){
		int n; 
		cin>>n;
		int a[n];
		int i;
		for(i=0; i<n; i++){
			cin>>a[i];

		}
		for(i=0; i<n; i++){
			int sum=0;
			int sum1,s;
			if(a[i]==1){

				a[i]=-1;
			
				int sum = sum + a[i];
			}
			if(a[i]==-1){

				a[i]=1;
				
				int s= sum + a[i];


		}
		 add = sum+s;
	}
	cout<<add<<endl;
}
}

