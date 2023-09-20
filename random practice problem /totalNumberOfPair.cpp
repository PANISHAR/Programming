#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	int cnt=0;

	for(int i=0; i<n; i++){
		cin >>a[i];
	}
	int x;
	cin >>x;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]+a[j]==x){
				cnt++;
			}
		}
	}
	cout << cnt;
}