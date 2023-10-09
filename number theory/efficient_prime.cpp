#include<bits/stdc++.h>
using namespace std;
bool prime (int n){
    if(n<2)return false;
    
    if(n<=3)return true;

    for(int i=3; i*i<n; i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    int n; cin >> n;
    if(prime(n)){
        cout << "prime number."<<endl;
    }
    else{
        cout << " not prime number."<<endl;
    }
    return 0;
}
