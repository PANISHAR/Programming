#include<stdio.h>
int main()
{
	int sum =0, n,temp,rem;
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rem = temp%10;
		sum = sum + rem*rem*rem;
		temp=temp/10;
	}
	printf("armstrong number");
	return 0;
}