#include<stdio.h>
int main()
{
	int x = 10;
	int *p;
	p = &x;
	printf("value of x=%d\n", x);
	printf("address of= %u\n", &x);
	printf("address of p=%d\n", p);
	printf("%d\n",*p);
}