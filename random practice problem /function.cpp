#include<stdio.h>
void x();

int main(){
	x();
}
void x (){
	int n;
	scanf("%d",&n);
	printf("%d", n + 10);
}