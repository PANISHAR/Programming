/*#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	for(a=1;a<=3;a++){
		for(b=1; b<=3 && b!=a; b++){
			for(c=1; c<=3 && c!=a && c!=b; c++){
				printf("%d %d %d\n",a,b,c);
			}
			printf("\n");
		}
	}
	return 0;
*/


/*#include<bits/stdc++.h>
using namespace std;
int main(){


int a,b,c;

for(a=1; a<=3; a++){
	for(b=1; b<=3; b++){
		if(a!=b){
			for(c=1; c<=3; c++){
				if(b!=c && c!=a){
					cout<<a<<" " <<b<<" "<<c;
				}
			}
			cout<<endl;
		}
	}
}
}*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	for(a=1; a<=4; a++){
		for(b=1; b<=4; b++){
			for(c=1; c<=4; c++){
				for(d=1; d<=4; d++){
					if(a!=b && c!=b && c!=a && c!=d && d!=a && d!=b && d!=c ){
						cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
					}
				}
			}
		}
	}
}