 #include<bits/stdc++.h>
 using namespace std;
 int32_t main(){
 	ios_base::sync_with_stdio(0);
 	cin.tie(0);
 	int n;
 	cin >> n;
 	int a[n];
 	for(int i=0; i<n; i++){
 		cin >> a[i];
 	}

 	for(int i=0; i<n; i++){
 		if(a[i]==0){
 			a[i]=0;
 		}
 		else if(a[i]>0){
 			a[i]=1;
 		}
 		else{
 			a[i]=2;
 		}
 	}
 	for(int i=0; i<n; i++){
 		cout << a[i]<<" ";
 	}
 	return 0;
 }