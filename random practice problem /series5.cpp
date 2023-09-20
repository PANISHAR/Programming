#include<stdio.h>
int main()
{
	float i,n,sum=0;
	scanf("%f", &n);
	for(i=1.5; i<=n; i++){
		sum = sum + i;
	}
	printf("%f", sum);
	return 0;
}