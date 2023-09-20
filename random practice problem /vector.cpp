#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int>v(n,0);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	v.pop_back();
	v.push_back(10000);
	v.erase(v.end()-2);
	v.insert(v.begin()+1,10101);
	for(int i=0; i<n; i++){
		cout << v[i]<<endl;
	}
	return 0;
}