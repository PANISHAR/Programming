// Rotate the given array 'Q' by k steps, where k is non-negative.
// note : k can be greater than n as well where n is the size of array 'a'.

#include<iostream>
using namespace std;
void reverse(int a[],int b,int c){
    for(int i=b,j=c; i<j; i++,j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return;
}

int main(){
    int n;
    cout << "enter the size : ";
    cin >> n;
    int a[n];
    cout << "enter the array : ";
    for(int i=0; i<n; i++){
        cin >> a[i]; // [1,2,3,4,5,6,7,8]
    }
    int k;
    cout << "enter the value of K : ";
    cin >> k;
    k = k%n;
    reverse(a,0,n-1); // this statement reverse the full array.[8,7,6,5,4,3,2,1]
    reverse(a,0,k-1); // at this statement, if  k = 4, reverse [4,5,6,7,8,3,2,1]
    reverse(a,k,n-1); // at this statement [4,5,6,7,8,1,2,3]
    for(int i=0; i<n; i++){
        cout << a[i]<<endl; // the final output come [4,5,6,7,8,1,2,3]
    }
    return 0;
}