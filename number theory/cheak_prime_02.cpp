#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n<2)return false;
    for(int i=2; i<=sqrt(n);i++){
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
        cout << "not a prime number."<<endl;
    }
}
// complexity O(root n)
/* in this code all the time we not find the exect ans 
we try to compear in a integer number with a double precision 
number that it not give always right answer*/