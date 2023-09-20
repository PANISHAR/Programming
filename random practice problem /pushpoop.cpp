#include<stdio.h>
#define n 6
int a[n];
int top = -1;
void posh(int ele){
	if(top==n-1){
		printf("overflow");
		return;
	}
	else{
		top = top + 1;
		a[top] = ele;
	}
}
int poop(){
	int value;
	if(top==-1){
		printf("stack are empty\n");
		return -1;
	}
	a[top] = value;
	top = top - 1;
	return value;
}
void print(){
	for(int i=0; i<n; i++){
		printf("%d\n",a[i]);
	}
}
int main(){
	posh(10);
	posh(20);
	posh(30);
	posh(40);
	posh(50);
	posh(60);
	int k = poop();
	printf("the pop value is :  %d\n",k);
	
	print();
}