#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1; i<=n; i+=2)
	{
		sum = sum + i;
	}
	printf('%d',sum);
	return 0;
}