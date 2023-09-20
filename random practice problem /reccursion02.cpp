// reccursion properties..

#include<bits/stdc++.h>
using namespace std;
int counter;
void call(){
	call(); // for this call we get degmentation fault, becouse eta ekta loop eh pore jacche
	counter++;
}
int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

call();
call();
cout << "counter value is = "<<counter << endl;

return 0;
}