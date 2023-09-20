// Count the number of elements in given array greater than a given number x.

#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6};
    int x;
    cin >> x;
    int cnt = 0;
    for(int i=0; i<6; i++){
        if(a[i]>x){
            cnt++;
        }
    }
    cout << cnt;
}