#include<bits/stdc++.h>
using namespace std;
int l,r;
void solve(vector<int> &v){
    
    l = 0;
    r = v.size()-1;
    while(l<r){
        while(v[l]%2==0 && l<r)
            l++;
        while(v[r]%2==1)
            r--;
        if(l<r){
            swap(v[l],v[r]);
            l++;
            r--;
        }
    }

}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >>v[i];
    }
    sort(v.begin(), v.end());
    solve(v);
    for(int i=0; i<n; i++){
        cout <<v[i]<< " ";
    }
    return 0;
}