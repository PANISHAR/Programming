#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    a = a%100;
    b = b%100;
    c = c%100;
    d = d%100;
    int last = (a*b*c*d)%100;
    if(last<=10){
        cout<< 0 << last<<endl;
    }
    else{
        cout<<last<<endl;
    }

    return 0;
}