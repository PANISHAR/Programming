#include<bits/stdc++.h>
using namespace std;
void add(int a){
	cout<<a<<endl;
	return;
}

int add(int n1,int n2){
	add(n1);
	add(n2);
	int sum = n1+n2;
	return sum;
}

int main()
{
	int x,y;
	cin>>x>>y;
	cout<<add(x,y)<<endl;
	return 0;
}