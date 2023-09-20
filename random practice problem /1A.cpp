#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,m,a;
cin>>n>>m>>a;
long long res1 = (n+a-1)/a;
long long res2 = (m+a-1)/a;
long long final = res1 * res2;
cout<<final<<endl;
}