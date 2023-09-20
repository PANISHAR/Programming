#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,gcd,lcm,x;
	cin>>a>>b;
	int n,m;
	n=a;
	m=b;
	while(m!=0){
		x = n%m;
		n=m;
		m=x;
	}
	gcd = n;
	lcm = (a*b)/gcd;
	cout<<gcd<<" "<<lcm<<endl;
	return 0;
}