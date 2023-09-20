//You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
//ATTCGGGA- input.
// output-3.




#include<iostream>
#include<string.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin >> s;
    ll ans = 1, x = 0;
    char ch = 'A';
    for(char c:s){
        if(c==ch){
            x++;
            ans = max(x,ans);
        }
        else{
            ch =c;
            x=1;
        }
    }
    cout << ans;
}