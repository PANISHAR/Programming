#include<stdio.h>
int main()
{
	int i;
	float j;
	double k;
	char c;

	printf("size of int=%d\n", sizeof(i));
	printf("size of float=%d\n", sizeof(j));
	printf("size of double=%d\n", sizeof(k));
	printf("size of char=%d\n", sizeof(c));
	printf("%d\n",printf("%s\n", "joyshib"));
	printf("%d\n", 100);
	printf("%c\n", 'k');
	unsigned int j = 4294967295;
	printf("%u", j);
	return 0;
}