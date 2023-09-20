#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p,q,cnt=0;
	cin >> n >> p;
	int a[200];

	for(int i=0; i<p; i++){
		cin >> a[i];
	}
	cin >> q;
	for(int i=p; i<p+q; i++){
		cin >> a[i];
	}

	sort(a, a+(p+q));

	for(int i=0; i<p+q; i++){
		if(a[i]!= a[i+1]){
			cnt++;
		}
		
	}

	if(cnt == n){
		cout << "I become the guy.";
	}
	else{
		cout << "Oh, my keyboard!";
	}
	return 0;
}