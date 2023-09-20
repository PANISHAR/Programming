#include<stdio.h>

void selection(int a[],int n){
	int min;
	for(int i=0; i<n-1; i++){
		int min = i;
		for(int j=i+1; j<n; j++){
			if(a[j]<a[min]){
				min = j;
			}
		}
		
		int temp = a[i];
		a[i]=a[min];
		a[min] = temp;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	selection(a,n);
	for(int i=0; i<n; i++){
		printf("%d " ,a[i]);
	}
	return 0;
}