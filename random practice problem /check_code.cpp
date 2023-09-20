#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b;
	cin >> a >> b;
	char ch[50];
	cin >> ch;
	if(ch[a]!='-'){
		cout << "No"<<endl;
		return 0;
	}
	int size = a+b+1;
	for(int i=0; i<size; i++){
		if(i==a)
			continue;
		if(!isdigit(ch[i])){
			cout << "No"<<endl;
			return 0;
		}
	}
	
 cout << "Yes"<<endl;
	return 0;
}