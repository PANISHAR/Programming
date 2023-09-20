#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n;
	cin>>n;
	string str;
	cin>>str;
	int red=0;
	int green=0;

	int blue=0;
		for(int i=1; i<n; i++){
		if(str[i-1]==str[i])
		if(str[i]=='R')
			++red;
		
		else if(str[i]=='G'){
			++green;
		}
		else if(str[i]=='B'){
			++blue;
		}
	
}
	cout<<red+green+blue;
	return 0;
}