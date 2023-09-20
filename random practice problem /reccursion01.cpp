// simple code ..
/*#include<bits/stdc++.h>
using namespace std;
void call(){
	cout << "hello"<<endl;
}
void call_again(){
	cout << "hello again"<<endl;
}
int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

call();// call it normally..
call_again();// call it normally..

return 0;
}*/

// we can call it reccusively that way..
// simple reccursion code..


#include<bits/stdc++.h>
using namespace std;
void call(){
	cout << "hi joy"<<endl;
}
void call_again(){
	call();
	cout << "hi joy again"<<endl;
}

int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

call_again();

return 0;
}