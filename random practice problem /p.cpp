#include<stdio.h>
int main()
{
	int sum=0,temp,num,r;
	printf("enter the value :");
	scanf("%d", &num);
	temp=num;
	while(temp!=0){
		r = temp % 10;
		sum = sum *10+r;
		temp= temp/10;

	}
	if(num==sum){
		printf("palindrome");
	}
	else{
		printf("not palimdrome");
	}
	return 0;
}