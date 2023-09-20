#include<stdio.h>
int main()
{
	float a,b,area;
	scanf("%f %f", &a, &b);
	area = 0.5 * a *b;
	printf("%.2f", area);
	return 0;
}