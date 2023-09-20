#include<stdio.h>
int main(){
    char s1[] = "beautiful JU campus";
    char s2[] = "beauty owl, black falcon";
    printf("%d\n",strlen(s1+7));
    printf("%d\n",strcmp(s1,s2));
    printf("%s\n",s1+10);
    printf("%s\n",s1+7,s2+7);
    strcat(s1,"s!");
    printf("%s\n",s1);
}