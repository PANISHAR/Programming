#include<stdio.h>
int main()
{
	
	int size,pos;
	scanf("%d",&size);
	int a[50];
	scanf("%d",&pos);

	for(int i=0; i<size; i++){
		scanf("%d",&a[i]);
	}

	if(pos <= 0|| pos > size+1){
		printf("NOT POSSIBLE TO DELETE");
	}
	else{
		int item = a[pos-1];
		for(int i=pos-1; i<size-1; i++){
			a[i] = a[i+1];
		}
		size--;
	}

	for(int i=0; i<size; i++){
		printf("%d\n",a[i]);
	}
	return 0;
}