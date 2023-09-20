// GIVEN Q QUERIES, CHECK IF THE GIVEN NUMBER IS PRESENT IN THE ARRAY OR NOT.

// NOTE: value of all the element is the array is less than 10 to the power 5.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "enter the size : ";
    cin >> n;
    vector<int> v(n);
    cout << "enter vector elements : ";
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<int>freq(n,0);
    for(int i=0; i<n; i++){
        freq[v[i]]++;
    }
    int q;
    cout << "enter the q value : ";
    cin >> q;
    while(q--){
        int queris;
        cout <<"enter the queris : ";
        cin>>queris;
        cout << freq[queris]<<endl;
    }
}