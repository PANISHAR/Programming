// find the second maximum value in array...


/*#include<bits/stdc++.h>
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

	int mx = INT_MIN;
	int s_mx = INT_MIN;

	for(int i=0; i<=n; i++){
		if(v[i]>mx){
			mx = v[i];
		}
	}
	for(int i=0; i<=n; i++){
		if(mx!=v[i] && v[i]>s_mx){
			s_mx = v[i];
		}
	}
	cout << s_mx << endl;
	return 0;
}*/

// anothe modifey way to solve the second max array..


/*#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int>v(n);
	for(int i=0; i<n; i++){
		cin >>v[i];
	}

	int mx = INT_MIN;
	int s_mx = INT_MIN;

	for(int i=0; i<n; i++){
		if(v[i]>mx){
			s_mx = mx;
			mx = v[i];
		}
	}
	cout << "maximum value is : "<< mx << endl;
	cout << "second maxima is : "<< s_mx<<endl;
	return 0;
}*/

// anothe approch is here..


#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int>a(n);

	for(int i=0; i<n; i++){
		cin >> a[i];n
	}

	int mx = INT_MIN;
	int s_mx = INT_MIN;

	for(int i=0; i<n; i++){
		if(a[i]>mx){
			s_mx = mx;
			mx = a[i];
		}
		else if(s_mx<a[i] && s_mx!=a[i]){
			s_mx = a[i];
		}
	}
	cout << "maximum value is : "<< mx<<endl;
	cout << "s_maximum is : "<<s_mx <<endl;
	return 0;
}