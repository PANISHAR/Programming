#include<stdio.h>
int main()
{
    int a,b,c,d,mul;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    mul=a*b*c*d;
    printf("%d\n%d",mul,(mul%100));
}