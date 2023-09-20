//simple input, output function in c
#include<stdio.h>
void output(int a){
	printf("%d",a);
}

int main(){
	int a;
	scanf("%d", &a);
	output(a);
	return 0;
}