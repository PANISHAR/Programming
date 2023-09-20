// Find the total number of pairs in the Array whose sum is equal to the given value x.

#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6,7};
    int x  = 6;
    int cnt = 0;
    for(int i=0; i<7; i++){
        for(int j=i+1; j<7; j++){
            if(a[i]+a[j]==x){
                cnt++;
                
            }
        }
    }
    cout << cnt;
}