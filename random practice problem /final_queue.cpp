#include<stdio.h>
#include<stdbool.h>
#define n 5
int a[n];
int front = 0, rear = -1, totalnumber=0;

bool isfull(){
	if(totalnumber==n){
		return true;
	}
	return false;
}

bool isempty(){
	if(totalnumber==0){
		return true;
	}
	return false;
}
void enqueue(int ele){
	if(isfull()){
		printf("stack is full\n");
		return;
	}
	else{
		rear = (rear+1)%n;
		a[rear] = ele;
		totalnumber++;
	}
}
int dequeue(){
	if(isempty()){
		printf("empty\n");
		return -1;
	}
	int value = a[front];
	front = (front + 1)%n;
	totalnumber--;
	return value;
}

void print(){
	for(int i=0; i<n;i++){
		printf("%d\n",a[i]);
	}
}

int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	int k = dequeue();
	printf("the dequeue value is : %d\n",k);
	print();
	return 0;
}