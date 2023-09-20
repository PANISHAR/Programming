#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int x = s.size();
        if(x>10){
            cout <<s[0]<<x-2<<s[x-1]<<endl;
        }
        else{
        cout << s << endl;
        }
    }
    return 0;
}