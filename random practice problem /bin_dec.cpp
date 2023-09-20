//normal factoril....

/*#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
int main(){
int t;
cin >> t;
while(t--){
	int n;
	cin >>n;
	long long fact = 1;
	for(int i=2; i<=n; i++){
		fact = (fact*i)%M;
	}
	cout << fact << endl;
}
}*/

//using pre-computint to modify the code with help of hashing .....
#include<bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7;
const int n = 1e5 + 10;
long long fact(n);
int main(){
	fact[0] = fact[1] = 1;
	for(int i = 2; i<n; i++){
		fact[1] = fact[i-1]*i;
	}
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		cout <<fact[x]<<endl;
	}
	return 0;
}