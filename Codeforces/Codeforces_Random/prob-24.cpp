// search  value..


/*#include<iostream>
using namespace std;
int main(){
    
    int A[] ={1,2,1,2,2,2,1,1,5};
    int n = sizeof(A)/sizeof(A[0]);
    int last_ind;
    int x = 1;
    for(int i=n-1; i>=0; i--){
        if(A[i]==x){
            last_ind = i;
            break;
        }
    }
    cout << last_ind;
}*/

// alternative way to solve..
#include<iostream>

using namespace std;
int main(){
    int a[] = {1,2,3,3,5,6,3,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    int x = 30;
     bool flag =false;
    for(int i=0; i<n; i++){
        if(a[i]==x){
             flag= true;
            break;
        }
    }
        if(flag==false){
            cout << "not present";
        }
        else{
            cout << "present";
        }
    
    return 0;
}