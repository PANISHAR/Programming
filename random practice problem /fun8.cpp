#include<stdio.h>
void power(int base, int exp)
{
	int result = 1,i;
	for(i=1;i<=exp;i++){
		result = result * base;
	}
	printf("%d\n", result);
}

int main(){
int a,b;
scanf("%d %d", &a, &b);
power(a,b);
}