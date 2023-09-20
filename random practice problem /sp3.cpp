#include<stdio.h>
void f(int *b)
{
	u=v;
	v=0;
	printf("%d\n %d", u,v);
}
void f2(int *pu, int *pv)
{
	*pu =0;
	*pv= 0;
	printf("%d\n %d", *pu,*pv);
}

int main()
{
	int u=2,v=3;
	printf("%d %d\n", u,v);
	f1(u,v);
	printf("%d 5d\n", u,v);
	return 0;
}