#include<stdio.h>
int main()
{
	int num,temo,rem,sum=0;
	scanf("%d",&num);
	temp = num;
	while(temp!=0)
	{
		rem = temp %10;
		sum = sum +rem;
		trmp = temp /10;
	}
	printf("the sum value is = %d\n",sum);
	return 0;
}