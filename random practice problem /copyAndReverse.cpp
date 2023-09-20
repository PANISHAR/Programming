#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		b[i]=a[7-i];
	}
	for(int i=0; i<n; i++){
		cout << b[i]<<" ";
	}
	return 0;
}