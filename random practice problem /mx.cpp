// sort 1 1 0 0 1 0 1 0

#include<bits/stdc++.h>
using namespace std;
void sorted(vector<int> &v){
    int cnt=0;
    for(int ele:v){
        if(ele==0){
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
    return;
}

int main(){
    int n;
    cin >> n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    sorted(v);
    for(int i=0; i<v.size();i++){
        cout << v[i]<<endl;
    }
    cout << endl;
    return 0;
}