#include <iostream>
using namespace std;

int main() {
	string str;
	cin>>str;
	int x=0;
	for(int i=0;i<str.size();i++){
	    if(str[i]>=33  &&  str[i]<=126){
	    if(str[i]=='H'|| str[i]=='Q' ||str[i]=='9')
	    x=1;
	}
	}
	if(x){
	    cout<<"YES";
	}else{
	    cout<<"NO";
	}
	return 0;
}