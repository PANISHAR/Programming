
//fibonacci sequence....

#include<bits/stdc++.h>
using namespace std;

void solve(int n){
	int t = 0;
	int t1 = 1;
	int next;
	for(int i = 1; i <= n; i++){
		cout << t << endl;
		next = t + t1;
		t = t1;
		t1 = next;
	}
	return;
}

int main(){
	int n;
	cin >> n;
	solve(n);
	return 0;
}