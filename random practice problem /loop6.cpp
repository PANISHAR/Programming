#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<20;i++){
		continue;
		printf("%d\n",i);
	
	if(i==10){
		break;
	}
	}
	return 0;
}