// get natural sum by reccursion...
/*include<bits/stdc++.h>
using namespace std;
int get_sum(int n){
	if(n==0)return 0;

	return get_sum(n-1)+n;
}

int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

int n;
cin >> n;
cout << get_sum(n)<<endl;

return 0;
}*/

// for better understand.
// we run part to part and see how it's work actually..

#include<bits/stdc++.h>
using namespace std;
int get_sum(int n){
	cout << "n = " <<" "<< n<<" "<<"got called " << endl;
	if(n==0){
		cout << "do not  go to further"<<endl;
		return 0;
	}
	int res = get_sum(n-1)+n;
	//int res = (n-1)+n;  // if we call this it just pass value 7.
	// after getting 7 just do (7-1)+6 this operation..
	cout << "returning value "<<res << endl;
	return res;
}
int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

cout <<get_sum(7)<<endl;


return 0;
}