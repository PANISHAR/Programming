#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	int sum = 0;
	for(int i=1; i<=N; i++){
		int x;
		cin >>x;
		sum+=x;
	}
	cout << sum <<endl;
}