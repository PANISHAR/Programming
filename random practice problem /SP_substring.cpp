#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int start,end,i;
	cin>>start>>end;
	for(i=start-1; i<(start+end)-1; i++){
		cout<<s[i];
	}
}