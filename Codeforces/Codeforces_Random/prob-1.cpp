// given an array of size N. the task is to find the maximum and the minimum element of array using the minimum number of compersation.


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int max = a[0]; // initially we set 1st index value of max and min.
    int min = a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max) 
            max = a[i];
        
        if(a[i]<min)
            min = a[i];
        
    }
    cout << "maximum value = " << max<<endl;
    cout << "minimum value = " << min<<endl;
    return 0;
}