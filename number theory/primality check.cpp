// primality testing ..

// primality test 01...

#include<bits/stdc++.h>
using namespace std;
int prime(int n){
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3; i*i<=n; i++){
        if(n%i==0)return false;
        
    }
    return true;
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        if(prime(n)){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
    return 0;

}