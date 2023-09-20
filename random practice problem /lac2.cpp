#include<stdio.h>
int square(int x)
{
	return x*x;
}

int main()
{
	int a;
	scanf("%d", &a);
	int res = square(a);
	printf("%d is the square", res);
}