#include<stdio.h>
void power(int x, int y){
	
	int result =1;
	for(int i=1;i<=y;i++){
		result = result * x;
	}
	printf("%d", result);
}
	
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	power(a,b);
	

}