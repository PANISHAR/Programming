#include<stdio.h>
#include<string.h>
int main()
{
	char ch[1002];
	gets(ch);
	int i,len;
	int sum=0; 
	len = strlen(ch);
	for(i=0;i<=len;i++){
		scanf("%s",&ch);
		int k = ch;
		sum = sum + k;
		if(sum%2==0){
			printf("hurrah!");
		}
		else{
			printf("alise!");
		}

	}
	return 0;
}