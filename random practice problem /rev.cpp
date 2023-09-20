#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string rev;
	for(int i=s.size()-1; i>=0; i--){
		rev.push_back(s[i]);
	}
	if(s==rev){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not"<<endl;
	}
	cout<<rev<<endl;
}