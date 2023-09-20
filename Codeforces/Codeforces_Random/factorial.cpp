#include<iostream>
using namespace std;

int solve(int n){
    int fact = 1;
    for(int i=2; i<n;  i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cin >> n;
    cout << solve(n)<<endl;
    return 0;
}