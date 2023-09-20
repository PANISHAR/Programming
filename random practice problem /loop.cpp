#include<stdio.h>
#include<string.h>
int main()
{
    char S[30]= "racecar";
    char S2[30];
    int i=0,j=0,len=0;
    while(S[i]!='\0'){
        i++;
        len++;
    }

    for(j=0,i=len-1;i>=0;i--,j++){
        S1[j]=S[i];
    }
    S1[j]='\0';
    int s = strcmp(str1,str2);
    if(s==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}