#include<stdio.h>
int main()
{
	int count=0,first=0,secound=1, n,fibo;
	scanf("%d",&n);
	while(count<n){
		if(count<=1){
			fibo=count;
		}
		else{
			fibo = first + secound;
			first = secound;
			secound= fibo;
		}
		printf("%d", fibo);
		count++;
	}
	return 0;

}