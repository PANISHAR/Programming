
#include<stdio.h>
int main()
{
  int a,b,sum,t;
  scanf("%d",&t);
  while(t--){
    scanf("%d+%d",&a, &b);
    if(a>=0 && b<=9){
      sum = a+b;
      printf("%d\n",sum);
    }
  }
  return 0;
}