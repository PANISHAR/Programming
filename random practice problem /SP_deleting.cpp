#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int ind,num;
    cin>>ind>>num;
    int len = s.length();
    int i,j;

    if(ind + num > len){
        cout<<"invalid";
        return 0;
    }

    for(i=ind+num; i<len; i++){
        s[i-num]=s[i];
    }
    cout<<s;
    
    return 0;
}