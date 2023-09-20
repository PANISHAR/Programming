#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int a,t,x,y;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x;
	    cin>>y;
	    cin>>a;
	    if(x<=a && a<y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }

	}
	return 0;
}