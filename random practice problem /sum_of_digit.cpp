#include<bits/stdc++.h>
using namespace std;

int solve(int n){
	int sum=0;
	while(n!=0){
		int last = n%10;
		sum+=last;
		n/=10;
	}
	return sum;
}

int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

char ch[100001];
cin >> ch;
int ans = 0;
int digit_sum=0;
int len = strlen(ch);
if(len==1){
	cout << "0"<<endl;
	return 0;
}
for(int i=0; i<len; i++){
	digit_sum+=ch[i]-'0';
}
ans++;
int n = digit_sum;
while(n>9){
	n = solve(n);
	ans++;
}
cout << ans << endl;


return 0;
}