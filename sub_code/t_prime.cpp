#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int arr[N] = {0};
	for(int i=2; i<=N; i++){
		if(arr[i]==0){
			for(int j=2; i*j<=N;j++){
				arr[i*j]=1;
			}
		}
	}
	int a;
	cin >> a;
	int b;
	while(a--){
		cin >> b;
		int n = sqrt(b);
		if(n==b)cout << "NO"<<endl;
		else if(n*n==b && arr[n]==0){
			cout << "YES"<<endl;
		}
		else{
			cout << "NO"<<endl;
		}
	}
	return 0;
}