#include<stdio.h>
int main()
{
	int a[10],n,i,sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int max = a[0];
	for(i=0;i<=n;i++){
		if(max<a[1]);
		max = a[i];

	}
	printf("max value = %d\n",max);
	return 0;
}