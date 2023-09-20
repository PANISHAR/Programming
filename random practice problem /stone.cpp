#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >>n;
	string s;
	cin>>s;
	int cnt=0;
	int start=0;
	while(start<n){
		int i = start;
		int end = i;
		while(i<n){
			if(s[i]==s[start]){
				end=i;
				i++;
			}
			else{
				break;
			}
		}
		int stone = end-start+1;
		cnt+=stone-1;
		start = end+1;


	}
	cout << cnt << endl;
	return 0;
}