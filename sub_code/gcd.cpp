#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a;
	cin >>a;
	while(a--){
		int b;
		cin >> b;

	
	int cnt=0;
	int s = sqrt(b);
	for(int i=1; i<s;i++){
		if(s*s==b && s%i==0){
			cnt++;
		}
	}
		if(cnt==1){
			cout << "YES"<<endl;
		}
		else{
			cout << "NO"<<endl;
		}
	}
	
	return 0;
}