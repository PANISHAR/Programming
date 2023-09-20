#include<stdio.h>
#include<stdbool.h>
#define n 5
int a[n];
int front=0,rear=0;
bool full(){
	if(rear == n-1){
		return true;
	}
	return false;
}
bool empty(){
	if(front == rear){
		return true;
	}
	return false;
}
void enqueue(int ele){
	if(full()){
		printf("overflow\n");
		return;
	}
	else{
		a[rear] = ele;
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
void print(){
	for(int i=0; i<n; i++){
		printf("%d\n",a[i]);
	}
}

int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	dequeue();

	print();
	
	}