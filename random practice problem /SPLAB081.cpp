#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);

	int a,b;
	scanf("%d %d",&a,&b);

	for(int i=a; i<b; i++){
		printf("%c\n",s[i]);
	}
	return 0;
}

