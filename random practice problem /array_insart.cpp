#include<stdio.h>
int main()
{
	int size;
	scanf("%d",&size);
	int a[size];
	for(int i=0; i<size; i++){
		scanf("%d",&a[i]);
	}
	int index;
	scanf("%d",&index);
	int value;
	scanf("%d",&value);
	for(int i=0; i<size; i++){
		if(i==index){
			a[index]=value;
		}
		else{
			continue;
		}
	}

	for(int i=0; i<size; i++){
		printf("%d\n",a[i]);
	}
	return 0;
}