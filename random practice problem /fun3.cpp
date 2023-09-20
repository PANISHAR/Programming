#include<stdio.h>
void ind();
void fren();

int main(){


int x;
scanf("%d", &x);
if(x==10){
	ind();
}
else{
	fren();
}
return 0;

}


void ind(){
	printf("Namaste");
}
void fren(){
	printf("Banjour");
}