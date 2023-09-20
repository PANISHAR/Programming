#include<stdio.h>
int main()
{
	float a,b,c,d;
	scanf("%f %f%f",&a,&b,&c);
	
	float d = sqrt(b*b-4*a*c);
	float x1 = (-b+d)/2a;
	float x2 = (b+d)/2a;
	printf("the value of x1 = %f\n",x1);
	printf("the value of x2  = %f",x2);
	return 0;
}