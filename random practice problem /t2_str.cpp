//how to act getline function on test case..
//way-02
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string str;
		getline(cin,str);
		cout<<str<<endl;
	}
}