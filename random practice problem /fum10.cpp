#include<stdio.h>
void display(char ch[])
{
	int i=0;
	while(ch[i]!='\0'){
		printf("%c\n", ch[i]);
		i++;
	}
}

int main()
{
	char s[20]="apurbo";
	display(s);
}