#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,y=0;
	cin>>a>>b;
	if(a>b){
		y=0;
	}
	else
		while(a<=b){
			a=a*3;
			b=b*2;
			
			y++;
		}
		cout<<y;
}