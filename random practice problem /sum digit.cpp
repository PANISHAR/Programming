#include<stdio.h>
int main()
{
	int j=0,n,temp,r;
	scanf("%d", &n);
	temp = n;
	while(temo!=0){
		r = temp%10;
		j = j+r;
		temp = temp/10;
	}
	printf("sum is : %d", j);
	return 0;
}