//div-1....(A-problem).

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
       int n;
      cin>>n;
      int a=1,b=0;
      n--;
      int m=2,cnt=0;
      while(n>0)
      {
             if(cnt==0||cnt==1)
             {
                   if(n<m)
                   {
                          b+=n;
                          break;
                   }
                   b+=m;
                   n-=m;
                   m++;
                   cnt++;
                   
             }
             else
             {
                   if(n<m)
                   {
                        a+=n;
                        break;
                   }
                   a+=m;
                   n-=m;
                   m++;
                   cnt++;
                  
             }
             cnt=cnt%4;
      }
      cout<<a<<" "<<b<<endl;
   }
   return 0;
}