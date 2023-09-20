#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t;
    
    cin >> t;
    while(t--){
        string s;
        cin >>s;
        string name = "codeforces";
        int cnt = 0;
        
        for(int i=0; i<10;i++){
            if(s[i]!=name[i]){
                cnt++;
            }
        }
        cout << cnt;
    }
}