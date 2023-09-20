#include<bits/stdc++.h>
using namespace std;
 void answer(){
 	string pi = "314159265358979323846264338327";
 	string s;
 	cin >> s;
 	for(int i=0; i<s.size(); i++){
 		if(s[i] != pi[i]){
 			cout << i << endl;
 			return;
 		}
 		
 		
 	}
 	cout << s.size() << endl;

 }

 int main(){
 	int t;
 	cin >> t;
 	while(t--){
 		answer();
 	}
 	return 0;
 }