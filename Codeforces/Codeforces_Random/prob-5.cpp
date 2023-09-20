// find the last occurrence of an element x in agiven array.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int occurrence = -1;
    int x;
    cin >> x;
    for(int i=0; i<n; i++){
        if(a[i]==x){
            occurrence = i;
        }
    }
    cout << occurrence;
}