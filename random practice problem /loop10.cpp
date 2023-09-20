#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
		printf("it's a letter");
	}
	else{
		printf("it's a digit");
	}
	return 0;
}