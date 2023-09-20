//how to act getline function on test case..
//way-01
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	++t;
	while(t--){
		string str;
		getline(cin,str);
		cout<<str<<endl;
	}
}