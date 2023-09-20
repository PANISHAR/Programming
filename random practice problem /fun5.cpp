#include<stdio.h>
double area(double x, double y)
{
	return 0.5*x*y;
}

int main()
{
	double base,height;
	scanf("%lf %lf", &base, &height);
	double result = area(base,height);
	printf("the triangle area is : %.3lf\n", result);
}