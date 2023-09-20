#include<stdio.h>
int main()
{
	int i, fact=1;
	int n;
	printf("enter an number:");
	scanf("%d", &n);
	for(i=1; i<=n;i++){
		fact = fact*i;
	}
	printf("%d\n",fact);
	return 0;
}
