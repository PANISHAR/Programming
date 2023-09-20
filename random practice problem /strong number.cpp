#include<stdio.h>
int main()
{
	int sum=0,n,temp,r,fact;
	scanf("%d", %n);
	temp=n;
	while(temp!=0)
		{
			r = temp%10;
			fact=1;
			for(int i=1;i<=n;i++){
				fact = fact * i;
			}
			sum = sum + fact;
			temp = temp/10;
		}
		if(sum==n){
			printf("it's a strong number");
		}
		else{
			printf("it's not a strong number");
		}
		return 0;
}