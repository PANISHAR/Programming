#include<stdio.h>
int main()
{
	char ch= 'a';
	for(ch='a';ch>='a' && ch<='z'; ch++){
		printf("%c\n", ch);
		int k = ch;
		printf("the acci value of %c is %d", ch);

	}
	return 0;
}