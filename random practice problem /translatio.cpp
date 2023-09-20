
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[101],s[101];
    int len,i,j,f=0;
    scanf("%s", &ch);
    scanf("%s", &s);
    len = strlen(ch);
    for(i=0,j=len-1;i<len;i++,j--){
        if(ch[i]==s[j]){
            f=1;
        }
        else{
            f=0;
            break;
        }

    }
    if(f==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}