#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,gcd,x,lcm;
	cin>>a>>b;
	if(a==0) gcd=a;
	else if(b==0) gcd=b;
	else{
		while(b!=0){
			x=b;
			b = a%b;
			a=x;
		}
		gcd = a;
		lcm = a*b/gcd;

	}

	cout<<a<<" "<<b;
}