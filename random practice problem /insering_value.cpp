#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}

	int pos,value;
	scanf("%d %d",&pos, &value);

	for(i=0; i<n; i++){
		if(i==pos){
			a[pos]=value;
		}
		else{
			continue;
		}
		for(i=0; i<n; i++){
			printf("%d ",a[i]);
		}
	}
	return 0;
}