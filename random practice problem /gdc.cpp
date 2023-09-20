#include<stdio.h>
int main()
{
	int num1,num2,n1,n2,rem,gdc,lcm;
	
	scanf("%d %d", &num1,&num2);
	n1=num1;
	n2=num2;
	while(n2!=0)
	{
		rem = n1%n2;
		n1=n2;
		n2=rem;
	}
	gdc = n1;
	lcm = (num1*num2)/gdc;
	printf("the value of GDC is = %d\n", gdc);
	printf("the value of LCM is =%d\n", lcm);
	return 0;
}