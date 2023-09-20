// function overloading...

#include<bits/stdc++.h>
using namespace std;
// add two integer..
int add(int a, int b){
	return a+b;
}
// add two double..
double add(double a, double b){
	return a+b;

}

// add three integer..

int add(int a, int b, int c){
	return a+b+c;
}
// multiple two integer..
int multiple(int a, int b=4){
	return a*b;
}

int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);

cout << add(2,3)<<endl;
cout << add(3.4,22.3)<<endl;
cout << add(44,11,1)<<endl;
cout << multiple(2,4)<<endl;
cout << multiple(5)<<endl;
return 0;
}