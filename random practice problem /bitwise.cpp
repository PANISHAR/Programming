#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a=10,b=13;
	int OR = (a | b);
	int AND = (a & b);
	int XOR = (a ^ b);
	int NOT = (~a);
	cout << "or is "<<OR << endl;
	cout <<"ans value is "<< AND << endl;
	cout <<"xor value is "<< XOR << endl;
	cout << "not value is"<<NOT << endl;
	int x = 11;
	int left_shift = (x<<3);// here 3 is how many times it shift.
	cout << "shifted value is : "<<left_shift<<endl;

	// 2^20 ke amra left shif diyeo ber korte parbo.

	int p = 1 << 20;

	cout << "the power of 1 to the power 20 is :"<<p<<endl;

	cout << "Right shift is : "<<(10>>2)<<endl;
	return 0;
}