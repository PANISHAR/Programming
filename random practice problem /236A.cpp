#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int cnt=0;
	sort(s.begin(),s.end());

	for(int i=0; i<s.size();i++){
		if(s[i]!=s[i+1]){
			cnt++;
		}
	}
	if(cnt%2==0){
		cout<<"CHAT WITH HER!"<<endl;
	}
	else{
		cout<<"IGNORE HIM!"<<endl;
	}
}