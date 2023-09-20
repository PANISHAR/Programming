
#include<stdio.h>
int main()
{
	int row,col,i,j;
	scanf("%d %d", &row,&col);
	for(i=1; i<=row; i++){
		for(j=1; j<=row; j++){
			if(i==1 || i==row || j==1 || j==col){
			printf("*");
		}
		else{
			printf(" ");
		}
		}
		printf("\n");
	}
	return 0;
}