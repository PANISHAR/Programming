#include<stdio.h>
#include<math.h>
int power(int x, int y)
{
	return pow(x,y);
}

int main()
{
	int a;
	scanf("%d", &a);
	int b;
	scanf("%d", &b);
	 int res = power(a,b);
	printf("the power value is:%d\n", res);
}