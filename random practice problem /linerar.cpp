#include<stdio.h>
int linear(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if(a[i]==x){
			return i;
		}
	}
	return -1;
}

int main(){
	int n;

	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int x;
	scanf("%d",&x);
	int k = linear(a,n,x);
	printf(" found at index : %d",k);
	return 0;
}