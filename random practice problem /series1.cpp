#include<stdio.h>
int main()
{
	int sum=0,n,i;
	scanf("%d", &n);
	printf("1+2+3+.....+%d",n);
	for(i=1;i<=n;i+=2)
	{
		sum = sum + i;
	}
	printf("=%d",sum);
	return 0;
}