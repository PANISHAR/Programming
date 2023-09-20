// check the array is sorted or not..

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    //int check = a[0];
    for(int i=0; i<n; i++){
        if(a[i]<a[i-1]){
            cout << "sorted";
            return 0;
        }
        else{
            cout << "unsorted";
            return 0;
        }
    }
    return 0;
    
}
*/

#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6};
    bool sorted = true;
    for(int i=0; i<6; i++){
        if(a[i]<=a[i-1]){
            sorted = false;
        }
    }
    cout << sorted;
}