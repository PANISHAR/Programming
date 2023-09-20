#include<stdio.h>
int value(double x)
{
	return(x);
}
int main()
{
	double n;
	scanf("%lf", &n);
	double res = value(n);
	printf("%lf", res);
}