#include<stdio.h>
int main()
{
	int a[30],n,i;
	scanf("%d",&n);
	a[0] = 0;
	a[i] = 1;
	for(i=2;i<n;i++){
		a[i]= a[i-1] + a[i-2];
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}