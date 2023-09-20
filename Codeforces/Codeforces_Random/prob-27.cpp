// Find the unique number in a given Array where all the elements are being repeated twice with One value being unique.

#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,3,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++){
        bool flag = false;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                flag = true;
            }
        }
        if(flag==false){
            cout << a[i]<<" ";
            break;
        }
    }
    return 0;
}