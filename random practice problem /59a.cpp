#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	int len,i,x=0,y=0;
	len = strlen(ch);
	for(i=0;i<len;i++){
		x++;
		if(s[i]>='A' && s[i]<='Z')
			x++;
		
		else
			y++;
		
	}
	if(x>y)
		strupr(s);
	
	else if(y>x)
		strlwr(s);
	
	else
		strlwr(s);
		printf("%s", s);
	
	return 0;
}