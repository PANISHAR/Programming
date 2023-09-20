#include<stdio.h>
void solve(int a[], int n){
	for(int i=0; i<n; i++){
		int min = i;
		for(int j = i+1; j<n; j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		if(min!=i){
			int temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
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