#include<stdio.h>
int main(){
    int n, j, flag = 0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("1 is not a prime number.\n");
    }
    else {
        for(j=2;j<=n/2;++j){
            if(n%j==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }
    return 0;
}
