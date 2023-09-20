#include<bits/stdc++.h>
using namespace std;
#define N 6
int a[N],top=-1;

void pushValue(int item){
	if(top ==N-1){
		cout << "OVERFLOW";
	}
	else{
		top = top+1;
		a[top] = item;
	}
}
void print(){
	for(int i=0; i<N; i++){
		cout << a[i]<< " ";
	}
}

int main(){
	int n;
	cin >> n;
	pushValue(19);
	pushValue(20);
	pushValue(21);
	pushValue(22);
	pushValue(23);
	pushValue(24);
	print();
}
