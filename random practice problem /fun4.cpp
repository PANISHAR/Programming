#include<stdio.h>
double area(double a)
{
	return 3.1416*a*a;
}

int main()
{
	double r,res;
	scanf("%lf", &r);
	res = area(r);
	printf("%.2lf", res);
}