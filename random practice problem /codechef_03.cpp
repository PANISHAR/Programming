#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    float ac_bl;
    cin>>t;
    cin>>ac_bl;
    if(t%5==0 && t<=ac_bl-0.5){
        cout<<((ac_bl-t)-(0.5));
    }
    else{
        cout<<ac_bl;
    }
	return 0;
}