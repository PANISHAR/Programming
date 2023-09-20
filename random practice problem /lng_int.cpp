//direct int type ante hole...
//now the value of 7 is not a character value it's an integer value..
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int last_digit = str[str.size()-1]-'0';
	cout<<last_digit<<endl;
}