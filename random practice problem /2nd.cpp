#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	for (int i=1 ;i<=t;i++)
	{
	    int a,b;
	    cin >> a>>b;
	    for (int i =1 ; i<=a ;i++)
	    {
	        int x;
	        cin >> x;
	        if (x<=b)
	        {
	            b=b-x;
	            cout << "1";
	        }
	        else
	        cout <<"0";
	        
	    }
	    cout <<"\n";
	    
	    
	}
	return 0;
}