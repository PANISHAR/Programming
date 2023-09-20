/*#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],b[n];
	for(int i=0; i<n; i++){
		cin >>a[i];
	}

	for(int i=0; i<n; i++){
		b[i]=a[i];
	}
	for(int i=n-1; i>=0; i--){
		cout << b[i]<<" ";
	}
	return 0;
}
*/
//you can simply copy another array and can do also reverse of this.

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],b[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		b[i] = a[n-i-1];
	}
	for(int i=0; i<n; i++){
		cout << b[i]<<" ";
	}
	return 0;
}