#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int mx = 0;
	int  mn = 0;
	for(int i=0; i<n; i++){
		int x;
		cin  >> x;
		mx = max(x,mx);
		mn+=mx-x;
	}
	cout << mn;
}