#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		for (int i =1 ; i<=n ;i++)
	    {
	        int x;
	        cin >> x;
	        if (x<=k)
	        {
	            k=k-x;
	            cout << "1";
	        }
	        else
	        cout <<"0";
	        
	    }
	    cout <<endl;
	    
	    
	}
	

	
	
	return 0;
}