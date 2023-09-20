// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.

#include<iostream>
using namespace std;
int main(){
    
    int a[] = {1,2,3,4,5,6,7,8};
    for(int i=0; i<8; i++){
        if(i%2==0){
            a[i]+=10;
        }
        else{
        a[i]*=2;
        }
        cout << a[i]<<" ";
    }
    
    return 0;
}