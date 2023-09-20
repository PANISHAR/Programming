#include<stdio.h>

int linear_serach(int a[],int n, int x){
	for(int i=0; i<n; i++){
		if(a[i]==x){
			return i;
		}
	}
	return -1;
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int x;
	scanf("%d",&x);
	int res = linear_serach(n,a,x);
	printf("%d",res);
	return 0;
}