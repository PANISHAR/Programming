#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		 int n;
		cin>>n;
		int a=1,b=0;


		for( int i=1; i<n-1; i++){

			if(i%4==1 || i%4==2)
				a++;
			else
				b++;
		}
		cout<< a << " " << b <<endl;
	}
	return 0;
}