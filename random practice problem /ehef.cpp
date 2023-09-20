#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t){
        int num,k;
        cin>>num>>k;
        int A[num];
        
        for(int i=1; i<num; i++){
            cin>>A[i];
        }
        
        for(int i=1; i<num; i++){
            if(k-A[i]>=0){
                cout<<"1";

                k-=A[i];
                            }
            else{
                
                cout<<"0";
            }
        }
        cout<<'\n';
        k=0;
    }

    return 0;
}