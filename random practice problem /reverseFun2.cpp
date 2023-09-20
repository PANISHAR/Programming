#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int n,int b,int c){
	for(int i=1,j=n-1;i<j;i++,j--){
		int temp = a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	return;

}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	reverse(a,n,2,4);
	for(int i=0; i<n; i++){
		cout << a[i]<<" ";
	}
	return 0;
}