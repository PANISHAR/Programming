#include<stdio.h>

int main(){
    int Tem;
    scanf("%d",&Tem);
    while(Tem--){
        int Act, des, hot, cold;
        scanf("%d%d%d%d",&Act,&des,&hot,&cold);
        if(Act>des){
            if(Act-des<=cold){
                printf("YES\n");
            }
            else
                printf("NO\n");
        }
        else if(Act<des){
            if(des-Act<=hot){
                printf("YES\n");
            }
            else
                printf("NO\n");
        }
        else
            printf("YES\n");
    }
    return 0;
}
