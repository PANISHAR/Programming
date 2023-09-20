#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=1;i<n;i++){
            if(a[i]<=a[i-1]) {
                int d = a[i-1]-a[i]+1;
                a[i] += d;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(a[i+1]<=a[i]) {
                int d = a[i]-a[i+1]+1;
                a[i] -= d;
            }
        }
        for(int i=0;i<n;i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
