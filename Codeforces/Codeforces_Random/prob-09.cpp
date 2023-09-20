// count the number of element strictly greather then value x..

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int x;
    cin >> x;
    int cnt = 0;
    for(int ele:a){
        if(ele>x){
            cnt++;
        }
    }
    cout << cnt;
}