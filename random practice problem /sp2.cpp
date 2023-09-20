#include<stdio.h>
int main()
{
	int u,v,*pu,*pv;
	scanf("%d", &u);
	pu=&u;
	v= *pu;
	printf("%d\n", v);
	pv=&v;
	printf("%d\n", *pv);
	return 0;
}