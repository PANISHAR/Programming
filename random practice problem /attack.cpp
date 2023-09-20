#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int h,x,y;
        cin >> h >> x >> y;
        int minimum = min(x,y);

        if(y >= h){

            cout << "1\n";
            continue;


            }
            else if(h > x && h <=y){
                y-=1;
                
            }
            else{
        int cnt = (h/minimum);
        cout << cnt <<endl;
    }
    }
}