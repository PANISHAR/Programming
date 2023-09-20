#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int max = INT_MIN;
	int smax = INT_MIN;
	for(int i=0; i<n; i++){
		if(a[i]>max){
			smax = max;
			max = a[i];
		}
		else if(smax<a[i] && max!=a[i]){
			smax = a[i];
		}
	}
	cout << smax;
}