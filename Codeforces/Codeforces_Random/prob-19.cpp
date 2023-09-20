// Write a program to copy the contents of one array into another in the reverse order.

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<=n; i++){
        b[i] = a[i];
    }
    for(int i=n-1; i>=0; --i){
        cout << b[i]<<" ";
    }
    return 0;
}*/

//alternative methode.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        b[i] = a[n-1-i];
    }
    for(int i=0; i<n; i++){
        cout << b[i]<<endl;
    }
    

}