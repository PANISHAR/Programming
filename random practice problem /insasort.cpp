#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i,value,hole;
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}

	for(i=1; i<n; i++){
		value = a[i];
		hole = i;
		while(hole > 0 && a[hole-1] > value){
			a[hole] = a[hole-1];
			hole--;
		}
		a[hole] = value;
	}
	printf("sorted array:\n");
	for(i=0; i<n; i++){
		printf("%d \n", a[i]);
	}
	return 0;
}