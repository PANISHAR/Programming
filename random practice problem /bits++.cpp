#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int x=0;
	string s;
	
	while(n--){
		cin >> s;
		if(s[0]=='+')
			x++;
		if(s[0]=='-')
			x--;
		if(s[2]=='+')
			x++;
		if(s[2]=='-')
			x--;
	}
	cout << x << endl;
}