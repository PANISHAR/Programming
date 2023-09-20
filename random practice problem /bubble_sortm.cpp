#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n){
	int i,j;
	for(i=0; i < n; i++){
		for(j=0; j<n-i-1; j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	solve(a,n);
	for(int i=0; i<n; i++){
		cout << a[i] << endl;
	}
	return 0;
}