#include<stdio.h>
int main()
{
	double A,B,X;
	scanf("%lf %lf",&A,&B);
	X = ((A * 3.5) + (B * 7.5))/(3.5+7.5);
	printf("MEDIA = %0.5lf\n",X);
	return 0;
}