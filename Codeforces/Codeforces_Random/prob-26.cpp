// WAP to find a duplicate element from a given array of integers.

#include<iostream>
using namespace std;
int main(){
    int a[] = {11,2,3,4,5,11,8};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                cout << "the duplicate value is : "<<a[i]<<endl;
                break;
            }
        }
    }
}