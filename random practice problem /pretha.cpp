#include<stdio.h>
int main()
{
	char ch = 'U';
	if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u'){
		printf("it's a vowel\n %c", ch);
	}

	else if (ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U')
		{
			printf("it's a vowel\n %c", ch);
		}

		else{

			printf("it's not a vowel\n");
		}
	return 0;

}