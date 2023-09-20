// Rotate the given array 'Q' by k steps, where k is non-negative.
// note : k can be greater than n as well where n is the size of array 'a'.

/*#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int a[] = {1,2,3,4,5,6};
    
    for(int i=1,j=3; i<j; i++,j--){
        swap(a[i],a[j]);
    }
    for(int i=0; i<n; i++){
        cout << a[i]<<" ";
    }

    return 0;
}*/

// same code solve by using function..

/*#include<iostream>
using namespace std;
void reverse(int a[],int b,int c){
    for(int i=b,j=c;i<j;i++,j--){
    int temp = a[i];
    a[i]=a[j];
    a[j] = temp;
    }
    return;
}

int main(){
    int a[] = {1,2,3,4,5,6,7};
    reverse(a,0,6);
    reverse(a,0,2);
    reverse(a,3,6);
    for(int i=0; i<7;i++){
        cout << a[i]<<" ";
    }

}*/

// rotaed the array for value k.

#include<iostream>
using namespace std;
void reverse(int a[],int b,int c){
    for(int i=b,j=c;i<j;i++,j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return;
}

int main(){
    int N = 7;
    int a[] = {1,2,3,4,5,6,7};
    int k = 3;
    k = k%N;
    reverse(a,0,N-1);
    reverse(a,0,k-1);
    reverse(a,k,N-1);
    for(int i=0; i<N; i++){
        cout <<a[i]<< " ";
    }
    return 0;
}