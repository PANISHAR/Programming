// algorithm for rotate value in a specific position..respect to k..

 /*k = k%n;
 reverse(v.begin(), v.end()
 reverse(v.begin(),v.end()+k)
 reverse(v.begin()+k,v.end())*/

 /*for array...
 	k = k%n
 	reverse(a,0,n-1)
 	reverse(a,0,k-1)
 	reverse(a,k,n-1)*/

// implementation..

#include<bits/stdc++.h>
	using namespace std;
	int32_t main(){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		int n;
		cin >> n;
		vector<int>v(n);
		for(int i=0; i<n; i++){
			cin >> v[i];
		}

		int k;
		cin >> k;

		k = k%v.size();

		reverse(v.begin(),v.end());
		reverse(v.begin(),v.begin()+k);
		reverse(v.begin()+k,v.end());

		for(auto u : v)cout << u << " ";
		return 0;
	}	