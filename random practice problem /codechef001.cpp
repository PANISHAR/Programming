#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int cnt=0,cnt2=0;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}

	for(int i=1; i<=n; i++){
		if(a[i]%2==0){
			cnt++;
		}
		else{
			cnt2++;
		}
	}

	if(cnt>cnt2){
		cout<<"READY FOR BATTLE";
	}
	else{
		cout<<"NOT READY";
	}

	return 0;
}