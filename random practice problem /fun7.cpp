#include<stdio.h>
#include<math.h>
void power(int x, int y)
{
	int power = pow(x,y);
	printf("the power value is : %d\n", power);

}

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	power(a,b);
}