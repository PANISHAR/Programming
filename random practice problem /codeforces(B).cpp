#include <bits/stdc++.h>
using namespace std;


int digit_sum(int num){
	int sum=0;
	while(num>0){
		sum+= num%10;
		num/=10;
	}

	return sum;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		int x = num/2;
		int y = num-x;
		while(abs(digit_sum(x) - digit_sum(y) > 1)){
			x--;
			y++;
		}
		cout<< x << " " << y << endl;
	}
	return 0;
}