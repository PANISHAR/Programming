#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,last_digit;
	cin>>n>>k;
	for(int i=1; i<=k; i++){
		last_digit=n%10;
		if(last_digit==0){
			n=n/10;
		}
		else if(last_digit!=0){
			n=n-1;
		}
	}
	cout<<n<<endl;
}
