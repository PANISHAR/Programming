#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int occurrence = -1;
	int x;
	cin >> x;
	//for(int i=0; i<n; i++){
		//if(a[i]==x){
			//occurrence = i;
		//}
	//}
	for(int i=n; i>=0; i--){
		if(a[i]==x){
			occurrence =i;
			break;
		}
	}
	cout << occurrence;
}