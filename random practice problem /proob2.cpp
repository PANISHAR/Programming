//reverse number...
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int sum = 0;
	cin>>n;
	while(n>0){
		int last = n%10;
		sum = sum + last;
		n = n/10;

	}
	cout<<sum;
}