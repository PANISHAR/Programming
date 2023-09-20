#include<stdio.h>
int main(){
    int T,a,b;
    scanf("%d",&T);
    for(int i=1; i<=T; i++){
        scanf("%d %d",&a,&b);
        int ave =(a+b)/2;
        if(ave%2==0){
            printf("Sadia will be happy.\n");
        }
        else{
            printf("Oops!\n");
        }
    }
    return 0;
}