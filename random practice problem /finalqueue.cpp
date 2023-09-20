#include<stdio.h>
#include<stdbool.h>
#define n 4

int a[n];
int front=0,rear=0;

bool empty(){
    if(front==rear){
        return true;
    }
    return false;
}
bool full(){
    if(rear==n){
        return true;
    }
    return false;
}
void enqueue(int data){
    if(full()){
        printf("overflow\n");
        return;
    }
    else{
        a[rear] = data;
        rear++;
    }
}
void dequeue(){
    if(empty()){
        printf("underflow\n");
        return;
    }
    else{
        printf("%d\n",a[front]);
        front++;
    }
}


int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    
    

}
