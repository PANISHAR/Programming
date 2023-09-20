// find second leargest element in array..

/*#include<iostream>
using namespace std;
int main(){
    int a[] = {1,211,3,4,5,67};
    int mx = a[0];
    int s_mx = a[0];
    for(int i=0; i<7; i++){
        if(a[i]>mx){
            mx = a[i];
        }
    }
    for(int i=0; i<7; i++){
        if(a[i]!=mx && a[i]>s_mx){
            s_mx = a[i];
        }
    }
    cout << s_mx;
}*/

// modified code..
/*#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,5,6,7,8,10};
    int mx = a[0];
    int smx = a[0];
    for(int i=0; i<7; i++){
        if(a[i]>mx){
            smx = mx;
            mx = a[i]; 
        }
        
    }
     cout << smx;
}*/
// another modified code

/*#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6};
    int mx = a[0];
    int smx = a[0];
    for(int i=0; i<=6;i++){
        if(mx<a[i]){
            mx = a[i];
        }
        else if(smx<a[i]){
            smx = a[i];
        }
    }
    cout << smx;
}*/

// final modified second maximum code.

#include<iostream>
using namespace std;
int main(){
    int a[] = {2,3,5,7,6,1};
    int max = a[0];
    int smax = a[0];
    for(int i=0; i<6; i++){
        if(a[i]>max){
            smax = max;
            max = a[i];
        }
        else if(a[i]>smax && max!=a[i]){
            smax = a[i];
        }
    }
    cout << smax;
}