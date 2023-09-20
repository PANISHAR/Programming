#include<stdio.h>
int bin(int a[], int n, int x){
	int l,r,mid;
	l = 0;
	r = n-1;
	while(l<=r){
		//mid = l + (r-l)/2;
		mid = (l+r)/2;
		if(a[mid]==x){
			return mid;
		}

		if(a[mid] < x){
			l = mid + 1;
		}
		else{
			r = mid - 1;
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
	int k = bin(a,n,x);
	printf("value found at index : %d",k);
	return 0;
}