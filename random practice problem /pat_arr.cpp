//here we see that, if we declare array size > 1e5 then we get error which call segmentation error, so we use the size of array between 1s5..
//local decl....
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 1e5;
	int a[n];
	a[n-1] = 10;
	cout<<a[n-1];
}