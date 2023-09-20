#include<stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int A, B, X, Y;
        scanf("%d%d%d%d",&A,&B,&X,&Y);
        if(A>B){
            if(A-B<=Y){
                printf("YES\n");
            }
            else
                printf("NO\n");
        }
        else if(A<B){
            if(B-A<=X){
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