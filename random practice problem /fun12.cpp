#include<stdio.h>
void maximum(int x[])
{
	int i,max=x[0];
	for(i=0; i<5; i++){
		if(max<x[i]){
			max = x[i];
		}
	}
	printf("the maximum value is :%d\n", max);
}

void minimum(int x[])
{
	int i, min= x[1];
	for(i=0;i<5;i++){
		if(min>x[i]){
			min = x[i];
		}
	}
	printf("the min value is :%d\n", min);
}

int main()
{
	int num[30]={10,20,30,40,50};
	int max=maximum(num);

}
int main()
{
	int s[30]={10,20,30,40,50};
	int min=minimum(s);
}