// Write a program to reverse the array without using any extra array.

#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=n-1; i>=0; --i){
        cout << a[i]<<" ";
    }
    return 0;
}