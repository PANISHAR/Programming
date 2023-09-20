#include<bits/stdc++.h>
using namespace std;
void sum(int n){
	cout<<n<<endl;
	return;
}

int add(int a, int b){
	int s = a+b;
	sum(s);
	return s;
}

int main()
{
	int x,y;
	cin>>x>>y;
	add(x,y);
	return 0;
}