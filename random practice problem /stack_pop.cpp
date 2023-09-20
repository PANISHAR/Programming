#include<bits/stdc++.h>
using namespace std;
#define N 6
int a[N],top=-1;
void pope(int item){
	if(top==0){
		cout << "underflow"<<endl;
	}
	else{
		top=top-1;
		a[top]=item;
	}
}

void print(){
	for(int i=0; i<=top;i++){
		cout << a[i]<<" ";
	}
}
int main(){
	pope(10);
	pope(12);
	pope(14);
	pope(16);
	pope(18);
	pope(20);
	print();
}