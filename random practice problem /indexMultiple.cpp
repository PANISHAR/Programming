#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	int ans=0;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		if(i%2==0){
			a[i]+=10;
		}
		else{
			a[i]*=2;
		}
	

}
for(int i=0; i<n; i++){
	cout << a[i];
}
}