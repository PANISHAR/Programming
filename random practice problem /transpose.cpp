#include<stdio.h>
int main()
{
	int i,j,col,row,A[2][3],B[2][3],transpose[2][3];
	scanf("%d %d", &col,&row);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			 transpose[j][i] = A[i][j]; 
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d\n",A[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d\n",B[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d\n",transpose[j][i]);
		}
		printf("\n");
	}
	return 0; 

}