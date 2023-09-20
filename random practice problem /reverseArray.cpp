#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int s=0;
	int ed = n-1;
	while(s<ed){
		swap(a[s],a[ed]);
		s++;
		ed--;
	}
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	return 0;
}