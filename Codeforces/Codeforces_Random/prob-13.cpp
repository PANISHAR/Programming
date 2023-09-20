//find the max value in array..

#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,1111,23,111,323};
    int mx = a[0];
    int pos = 0;
    for(int i=0; i<6; i++){
        if(a[i]>mx){
            mx = a[i];
        }
        if(a[i]>a[pos]){
            pos = i;
        }
    }
    cout << pos<<endl;
    cout << mx;
}