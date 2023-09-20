//indexing..
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	string s1;
	getline(cin,s1);
	int i,j,len,len2;

	for(i=0; i<s.size(); i++){
		for(j=0; j<s1.size(); j++){
			if(s[i+j]!= s1[j]){
				break;
			}
		}
		if(j==s1.size())
			cout<<i+1<<endl;
	}
	
	return 0;
}