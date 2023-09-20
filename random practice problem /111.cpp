// stack push ,pop and peek....

#include<stdio.h>
#include<stdbool.h>
#define n 4
int a[n];
int top =-1;

bool empty(){
    if(top==-1){
        return true;
    }
    return false;
}
bool full(){
    if(top==n-1){
        return true;
    }
    return false;
}
void push(int ele){
    if(full()){
        printf("overflow\n");
        return;
    }
    else{
        top++;
        a[top] = ele;
    }
}
int pop(){
    int item;
    if(empty()){
        printf("underflow\n");
        return -1;
    }
    else{
        item = a[top];
        top--;
        return item;
    }
}
void peek(){
    if(top==-1){
        printf("undeflow\n");
        return;
    }
    else{
        printf(" the top value is : %d\n",a[top]);
    }
}
void print(){
    for(int i=0; i<=top;i++){
        printf("%d\n",a[i]);
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    pop();
    peek();
    print();
    
}
