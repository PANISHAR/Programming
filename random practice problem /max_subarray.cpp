#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >>n;
	int a[n+1];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int sum=0;
	int max = INT_MIN;
		for(int i=1; i<=n; i++){
		sum+=a[i];
		if (max < sum)
            max = sum;
 
        if (sum< 0)
            sum = 0;
    }
	
	cout << max << endl;

	return 0;
}