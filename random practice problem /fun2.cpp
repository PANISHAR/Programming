#include<stdio.h>
int joy(int a,int b)
{
	return a+b;
}
int shib(int c,int d){
	return c+d;
}

int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d", &a, &b,&c,&d);
	int sum1 = joy(a,b);
	printf("the 1st sum is: %d\n", sum1);
	int sum2 = shib(c,d);
	printf("the 2nd sum is :%d\n", sum2);
}