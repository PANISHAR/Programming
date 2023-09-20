#include<stdio.h>
int sum(int a, int b)
{

	//we can print the sum value on here.
	// if we not need to return value then we can cuse void function on here.
	return a+b;
}
 void div(int c, int d)
{
	printf("the division is : %d\n", c/d);
}

int main()
{
	int x,y;
	scanf("%d %d", &x, &y);
	int result = sum(x,y);
	printf("the sum is : %d\n", result);
	div(x,y);
}