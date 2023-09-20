// find the last occurrence of an element x in agiven array.

#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int occurr = -1;
    int x;
    cin >> x;
    for(int i=n-1; i>=0; i++){
        if(v[i]==x){
            occurr = i;
            break;
        }
    }
    cout << occurr;
}