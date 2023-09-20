#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int cnt=0;
	vector<int>v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	int x;
	cin >> x;

	for(int ele:v){
		if(ele>=x)
			cnt++;
		
	}
	cout << cnt;
}