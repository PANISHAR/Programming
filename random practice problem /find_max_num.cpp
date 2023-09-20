#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	int max = INT_MIN;
	for(int i=0; i<n; i++){
		cin >>a[i];
	}
	for(int ele:a){
		if(ele>max){
			max=ele;
		}

	}
	cout << max;
	return 0;
}