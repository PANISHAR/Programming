#include<stdio.h>
void show(int a[]){
	for(int i =0; i<5; i++){
		printf("%d ", a[i]);
	}
}

int main()
{
	int x[]={10,20,30,40,50};
	show(x);
}