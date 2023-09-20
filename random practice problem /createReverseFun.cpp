#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int b,int c){
	for(int i=1,j=4; i<j;i++,j--){
		int temp = a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	return;
}
int main(){
	int a[] = {1,2,3,4,5,6,7};
	reverse(a,1,4);
	for(int i=0; i<7;i++){
		cout << a[i]<<endl;
	}
	return 0;
}