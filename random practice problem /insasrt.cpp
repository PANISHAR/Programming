#include<stdio.h>

void solve(int a[], int n){
	int hole,value;
	for(int i=1; i<n; i++){
		value = a[i];
		hole = i;
		while(hole > 0 && a[hole-1] > value){
			a[hole] = a[hole - 1];
			hole--;
		}
		a[hole] = value;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	solve(a,n);
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	return 0;
}