#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >>a[i];
	}
	for(int i=0; i<n; i++){
		if(a[i]==a[n-1-i]){
			cout << "palindrome";
			return 0;
		}
		else{
			cout << "not";
			return 0;
		}
	}
	return 0;
}