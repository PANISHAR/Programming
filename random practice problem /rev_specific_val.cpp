
// reverse a specific value in array..

#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int b,int c){
	for(int i=b,j=c; i<j;i++,j--){
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	return;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >>a[i];
	}
	reverse(a,1,4);
	for(int i=0; i<n; i++){
		cout << a[i]<<" ";
	}
}