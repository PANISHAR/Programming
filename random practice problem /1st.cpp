#include<bits/sttdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=2; i<n; i++){
		if(n%i==0){
			break;
		}
	}
	if(i==n){
		cout<<"prime number"<<endl;
	}
	return 0;
}