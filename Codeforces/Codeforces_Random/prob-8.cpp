// sort an array consisting of only 0s and 1s..


#include<iostream>
#include<vector>
using namespace std;
void sorted(vector<int> &v){
    int cnt=0;
    for(int i=0; i<v.size();i++){
        if(v[i]==0){
            cnt++;
        }
    }
    for(int i=0; i<v.size();i++){
        if(i<cnt){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >>v[i];
    }
    sorted(v);
    for(int i=0; i<n; i++){
        cout << v[i]<<" ";
    }
    cout << endl;
}