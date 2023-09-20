#include<stdio.h>
int main()
{
	int n,i,fact;
	printf("enter any number :");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		fact = fact * i;
	}
	printf("tha fact value is=%d\n", fact);
	return 0;
}