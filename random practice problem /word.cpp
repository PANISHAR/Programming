#include<stdio.h>
#include<string.h>
int main(){

    char s[100];
    gets(s);
    int len,x=0,y=0;
    int i;
    len = strlen(s);
    for(i=0;i<len;i++){
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
