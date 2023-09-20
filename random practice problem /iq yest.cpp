#include<stdio.h>
int main()
{
    int n,i,p,x1=0,s=0,k,x2=0;
    scanf("%d",&n);
    int a[100];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            x1++;
        }
        else{
            x2++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(x1>x2)
        {
            if(a[i]%2!=0)
            {
                k=i;
            }
        }
        else{
            if(a[i]%2==0)
               {
                   k=i;
               }
        }
    }
    printf("%d\n",k);

}
