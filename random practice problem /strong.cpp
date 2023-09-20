#include<stdio.h>
int main()
{
	int sum=0,n,temp,r,i,fact;
	scanf("%d", &n);
	temp=n;
	while(temp!=0)
		{
			r = temp%10;
			fact=1;
			for(i=1;i<=r;i++){
				fact = fact * i;
			}
			sum = sum + fact;
			temp = temp/10;
		}
		if(n==sum){
			printf("it's a strong number");
		}
		else{
			printf("it's not a strong number");
		}
		return 0;
}