#include<stdio.h>
#define N 6
int a[N],top=-1;
void posh(int ele){
	if(top == N-1){
		printf("overflow");
		return;
	}
	else{
		top+=1;
		a[top] = ele;
	}
}
void print(){
	for(int i=0; i<N; i++){
		printf("%d \n",a[i]);
	}
}
int  poop(){
	int ele;
	if(top==-1){
		printf("the stack are empty\n");
		return -1;
	}
	
		a[top] = ele;
		top = top - 1;
		return ele;
	
}

int main(){
	posh(101);
	posh(102);
	posh(103);
	posh(104);
	posh(105);
	posh(106);
	int k = poop();
	print();
	
	
	
	printf(" the pop value is : %d",k);
}