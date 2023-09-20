// there are two number a,b
// we need to even sum between this range..

#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin >> l>>r;
		int sum,a,r1;
		if(l%2==0){
			a=l;
		}
		else{
			a=l+1;
		}
		if(r%2==0){
			r1=r;
		}
		else{
			r1 = r-1;
		}
		double n = (double)(r1-a)/2;
		sum = r1 + (n/2*(2*a+(n-1)*2));
		cout << sum<<endl;
	}
	return 0;
}