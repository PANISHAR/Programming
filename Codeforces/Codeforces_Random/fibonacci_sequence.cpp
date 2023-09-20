#include<iostream>
using namespace std;

void solve(int n){
    int t1=0;
    int t2 = 1;
    int next;
    for(int i=0; i<n;i++){
        cout << t2 << endl;
        next = t1+t2;
        t1 = t2;
        t2 = next;
    }

    cout << t2;
    return;
}

int main(){
    int n;
    cin >> n;
    solve(n);
    return 0;
}