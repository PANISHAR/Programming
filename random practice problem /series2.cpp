#include<stdio.h>
int main()
{
	int i,n,sum=0;
	scanf("%d", &n);
	printf("2+4+6....+%d",n);
	for(i=1;i<=n;i+=2)
	{
		sum = sum + i;
	}
	printf("=%d\n",sum );
	return 0;
}