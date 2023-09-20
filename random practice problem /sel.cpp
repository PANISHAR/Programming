#include<bits/stdc++.h>
using namespace std;
void selec(int a[],int n){
	int temp,min;
	for(int i=0; i<n; i++){
		min = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min = j;
			}
		}
		if(min!=i){
			temp = a[i];
			a[i] = a[min];
			a[min]=temp;
		}
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	selec(a,n);
	for(int i=0; i<n; i++){
		cout << a[i]<< " ";

	}
	return 0;
}