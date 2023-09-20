#include<stdio.h>
int main()
{
	int sum=0, n,temp,r;
	scanf("%d", &n);
	temp=n;
	while(temp!=0)
	{
		r=temp%10;
		sum = sum *10+r;
		temp=temp/10;
	}
	printf("reverse value is:%d\n",sum);
	return 0;
}