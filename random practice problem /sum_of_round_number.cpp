#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
        int cnt=0;
        int res;
		vector<int>v;
		if(n%10!=0){
			v.push_back(n%10);
		}
		 res = n%10;
		n = n-res;
		if(n%100!=0){
			v.push_back(n%100);
		}
		 res = n%100;
		n = n-res;
		if(n%1000!=0){
			v.push_back(n%1000);
		}
		 res = n%1000;
		n = n-res;
		if(n%10000!=0){
			v.push_back(n%10000);
		}
		 
		if(n>=10000 && n%10000==0){
			v.push_back(n);
		}
        cout << v.size()<<endl;

        for(int i=0; i<v.size();i++){
        	cout << v[i]<<" ";
        }
        cout<<endl;



	}
	return 0;
}