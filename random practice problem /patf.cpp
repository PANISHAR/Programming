#include<bits/stdc++.h>
using namespace std;
int sum(int n){
	int s=0;
	while(n>0){
		s= s + n%10;
		n=n/10;
	}
	return s;
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<sum(a)+sum(b);
}