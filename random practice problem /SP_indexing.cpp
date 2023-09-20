#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	getline(cin,s1);
	string s2;
	getline(cin,s2);

	int ind;
	cin>>ind;
	int i,j;
	for(i=0; i<s1.size(); i++){
		for(j=0; j<s2.size(); j++){
			if(s1[i+j]!=s2[j]){
				break;
			}
		}
		if(j==s2.size())
	
	cout<<i+1<<endl;
}

return 0;
}