#include<bits/stdc++.h>
using namespace std;
#define N 5
int a[N],top=-1;
void pushv(int item){
	if(top==N-1){
		cout << "overflow"<<endl;
	}
	else{
		top = top+1;
	    a[top]=item;
	}
}
void print()
{
	for(int i=0;i<N;i++)
	{
		cout<<a[i]<<endl;
	}
}

int main(){
	
	pushv(30);
	pushv(31);
	pushv(32);
	pushv(33);
	pushv(34);
	pushv(36);
	print();
}