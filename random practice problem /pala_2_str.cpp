#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	string str_rev;
	for(int i = str.size()/2; i>=str['\0']-1-i; i--){
		str_rev.push_back(str[i]);
	}
	cout<<str_rev<<endl;
	if(str==str_rev){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not palindrome"<<endl;
	}
}