#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >>n;
	string s;
	cin >>s;
	int a=0,d=0;
	for(char ch : s){
		if(ch=='A'){
			a++;
		}
		else{
			d++;
		}
	}
	if(a==d){
		cout << "Friendship"<<endl;
	}
	else if(a>d){
		cout << "Anton"<<endl;
	}
	else{
		cout << "Danik"<<endl;
	}

	return 0;
}