#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[100];

	for(int i = 1; i <= n; i++){
		cin >> a[i];
		cout << bubble(a,n) << ' ';
	}

	int bubble(int a[], int n){

	for(int step = 1; step <= n; step++){
		for(int i = 1; i < n; i++){
			if(a[i] > a[i + 1]){
				swap(a[i], a[i + 1]);
				return i;
			}
		}
		return -1;
	}
	 
	 }
}