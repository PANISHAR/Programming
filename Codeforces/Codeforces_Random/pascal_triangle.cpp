#include<iostream>
using namespace std;

int pascal(int n){
    int fact = 1;
    for(int i=2; i<n; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << pascal(i)/pascal(j)*pascal(i-j)<<" ";
        }
        cout << endl;
    }
        return 0;
    }