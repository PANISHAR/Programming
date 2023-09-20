#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	string f,s;
	cin>>f>>s;
	for(i=0; i<f.size(); i++){
		
			f[i]=tolower(f[i]);
			s[i]=tolower(s[i]);
		}
	if(f==s)
		cout<<"0"<<endl;
	else{
	for(i=0; i<s.size(); i++){
		if(f[i] < s[i]){
			cout<<"-1"<<endl;
			break;
		}
		if(f[i] > s[i]){
			cout<<"1"<<endl;
			break;
		}
		}
	}
}