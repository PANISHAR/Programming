#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int pos=0,neg=0,zero=0;
	for(int i=0; i<n; i++){
		if(a[i]==0){
		zero++;
			
		}
		else if(a[i]>0){
			pos++;
		}
		else{
			neg++;
		}
	}
	   cout << fixed << setprecision(6);

	cout << setprecision(6) << (double(pos)/n )<< '\n';
	cout << setprecision(6) << (double(neg)/n) << '\n';
	cout << setprecision(6) << (double(zero)/n) << '\n';




	return 0;
}