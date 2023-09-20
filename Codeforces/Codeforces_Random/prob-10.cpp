// find the diffrence between the sum of element at even indicates of the sum of elements of odd indicates..

#include<iostream>
using namespace std;
int main(){
    int a[] = {1,3,5,2,4,5,1};
    int odd = 0,even = 0;
    for(int i=0; i<7; i++){
        if(i%2==0){
            even+=a[i];
        }
        else{
            odd+=a[i];
        }
    }
    cout << even-odd;
    return 0;
}