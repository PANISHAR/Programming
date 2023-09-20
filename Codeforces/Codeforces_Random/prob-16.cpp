// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6,7};
    int even = 0,odd = 0;
    for(int i=0; i<7;i++){
        if(i%2==0){
            even+=a[i];
        }
        else{
            odd+=a[i];
        }
    }
    cout << even-odd;
}