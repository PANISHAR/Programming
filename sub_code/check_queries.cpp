//given Q queries , check if the given number is present in the array. 

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	vector<int>v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	vector<int>freq(N,0);
	for(int i=0; i<N; i++){
		freq[v[i]]++;
	}
	int Quire;
	cin >> Quire;
	while(Quire--){
		int q_ele;
		cin >> q_ele;
		cout << freq[q_ele]<<endl;
	}
	return 0;
}