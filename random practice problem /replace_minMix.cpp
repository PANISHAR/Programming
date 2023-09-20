#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >>n;
	int a[n+1];
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	int maxi = -1e9;
	int max_pos=-1;
	for(int i=1; i<=n; i++){
		if(a[i]>maxi){
          maxi = a[i];
          max_pos=i;
		}
	}
	int mini = 1e9;
	int min_pos=-1;
	for(int i=1; i<=n; i++){
		if(a[i]<mini){
			mini = a[i];
			min_pos = i;
		}
	}
	swap(a[min_pos],a[max_pos]);
	for(int i=1; i<=n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	
	return 0;
}