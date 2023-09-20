// calculate the sum of the element in the given array..

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int sum = 0;
    int sum2 = 0;
    for(int i=0; i<n; i++){
        sum+=a[i]; // this operation calculate the sum of array element.
        sum2+=i; // this operation calculate the sum of array index.
        
    }
    cout << "sum of element is : "<<sum <<endl;
    cout << "sum of index is : "<<sum2 << endl;
    cout << n*(n-1)/2<<endl;
    return 0;
}