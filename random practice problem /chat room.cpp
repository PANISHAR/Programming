#include<stdio.h>
int main(){
    int i,j=0,x=0;
    char ch[100],array[5]= "hello";
    scanf("%s",ch);
    for(i=0;i<5;i++){
        while(ch[j]!='\0'){
            if(array[i]==ch[j]){
                x++;
                j++;
                break;
            }
            else
                j++;
        }
    }
    if(x==5)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
