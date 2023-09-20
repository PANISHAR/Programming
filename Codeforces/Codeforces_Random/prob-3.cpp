// reverse string.

#include<iostream>
#include<string.h>
using namespace std;
int main(){

    string s;
    cin >> s;
    string rev;
    for(int i=s.size()-1; i>=0; i--){
       // rev+=s[i]; // this is the 1 method to reverse the string .
    rev.push_back(s[i]);
    }
    cout << rev;
}