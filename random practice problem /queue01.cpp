#include<stdio.h>
#include<stdbool.h>
#define N 6
int a[N];
int front = 0, rear=-1,totalElement=0;

bool isfull(){
	if(totalElement==N){
		return true;
	}
	
		return false;
	
}

bool isEmpty(){
	if(totalElement==0){
		return true;
	}
	return false;
}

void enqueue(int ele){
	if(isfull()){
		printf("FULL\n");
		return;
	}
	rear = (rear + 1)%N;
	a[rear]=ele;
	totalElement++;

}

//int dequeue(){

//}
void print(){
	for(int i=0; i<N; i++){
		printf("%d ",a[i]);
	}
}

int main(){
	enqueue(10);
	enqueue(100);
	enqueue(1000);
	enqueue(10000);
	enqueue(101);
	enqueue(1010);
	print();
}