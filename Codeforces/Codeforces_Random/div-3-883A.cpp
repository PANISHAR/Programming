#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt=0;
        for(int i=0; i<n; i++){
            int x,y;
            cin >> x >> y;
            if(x>y)
            cnt++;
        }
        cout << cnt << endl;
    }
}