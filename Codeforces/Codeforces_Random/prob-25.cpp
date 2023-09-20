// Given an array containing elements from 1 to 100 except one element in this range is missing. Find the missing element.

#include<iostream>
using namespace std;
int main(){

    int a[] = {1,2,3,4,5,6,7,8,9,0,11,22,33,44,55,66,77,88,99};
    int n = sizeof(a)/sizeof(a[0]);
    int sum1 = 0;
    for(int i=0; i<n; i++){
        sum1+=a[i];
    }
    int sum2 = n*(n-1)/2;
    cout <<sum1-sum2;
}