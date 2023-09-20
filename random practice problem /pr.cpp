#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int rem,sum=0;
	for(int i =1;i<n;i++){
		rem = n%1;
		sum = sum + i;
	}
		if(rem==0){
			printf("it'a a perfect number:");
		}
		else{
			printf("not a perfect number");
		}
	
	return 0;
}