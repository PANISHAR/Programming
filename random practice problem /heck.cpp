#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string rev;
    for(int i=s.size()-1; i>=0; i--){
        //rev.push_back(s[i]);
        rev += s[i];
    }
    cout << rev ;
}