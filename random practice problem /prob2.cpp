#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin >> n;
	ll cnt=0;
	for(int i=1; i<n; ++i){
		int x;
		cin >> x;
		cnt+=x;
	}
	cout << "missing value is :" <<n*(n+1)/2-cnt<<endl;
	cout << cnt<<endl;
}