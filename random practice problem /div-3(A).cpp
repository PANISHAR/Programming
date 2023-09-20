#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int w,d,h;
		cin>>w>>d>>h;
		int a,b;
		cin>>a>>b;
		int f,g;
		cin>>f>>g;
		int res = b+abs(a-b)+g;
		res = min(res,a+(b-d)+abs(b-g)+f);
		res = min(res,(b-d)+abs(a-f)+(d-g));
		res = min(res,(w-a)+abs(b-g)+(w-f));
		cout<<res+h<<endl;
	}
	return 0;
}