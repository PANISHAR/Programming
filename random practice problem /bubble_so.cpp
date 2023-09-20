#include<stdio.h>
int main(){
	int n;
	
	scanf("%d",&n);
	int a[n];

	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int beg=0, end = n-1, mid;
	int value;
	scanf("%d",&value);
	while(beg <= end){
		mid = (beg + end)/2;
		if(a[mid] == value){
			printf("item fount at index %d\n", mid);
			return 0;
		}
		else if(a[mid] < value){
			beg = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}
	printf("item not found.");
	return 0;

}