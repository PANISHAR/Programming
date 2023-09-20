//binary search....
#include<bits/stdc++.h>
using namespace std;
int bin_s(int a[], int n, int x){
	int beg=0;
	int end=n;
	while(beg<=end){
		int mid=(beg+end)/2;

		if(a[mid]==x){
			return mid;
		}
		else if(a[mid]>x){
			end = mid-1;
		}
		else {
			beg = mid+1;
		}
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int x;
	cin>>x;
	cout<<bin_s(a,n,x);
}