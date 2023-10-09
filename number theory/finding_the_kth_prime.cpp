/* solve wwith seive.
 amader n porjonto prime number gula jana ache amader ber
korte hobe je konta koto number prime.
ex- 2 3 5 7
k = 1 mane er 1st prime = 2.*/
#include<bits/stdc++.h>
using namespace std;
bool prime [100000009];
int n = 1000000;
vector<int>v;
void seive(){
    for(int i=2; i*i<=n; i++){
        if(prime[i]==false){
            for(int j=i*i; j<=n; j+=i){
               prime[j]=true;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(prime[i]==false){
            v.push_back(i);
        }
    }
}
int main(){
    
    seive();
    int t; cin >> t;
    while(t--){
        int q; cin >> q;
        cout << v[q-1]<<endl;
    }
    return 0;
}