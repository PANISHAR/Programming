/*#include<bits/stdc++.h>
using namespace std;
int memo[20];
int fibo(int n){
	if(n<=1){
		return n;
	}
	if(memo[n]!=-1){
		return memo[n];
	}
	//memo[n] = fibo(n-1)+fibo(n-2);
	return memo[n]=fibo(n-1)+fibo(n-2);
}
int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);
int n=5;
for(int i=0; i<=20; i++){
	memo[i]=-1;
}
cout << fibo(n)<<endl;


return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

// Fibonacci sequence using memoization
int memo[20];

int fibonacci(int n) {
  if (n <= 1) {
    return n; // Base case: Fibonacci of 0 is 0 and Fibonacci of 1 is 1
  }
  if (memo[n] != -1) { // If the result is already calculated
    return memo[n]; // Return the result
  }
    return memo[n] = fibonacci(n - 1) + fibonacci(n - 2); // Recursive call: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
}

int main() {
	freopen ("input_custom.txt", "r", stdin);
freopen ("output_custom.txt", "w", stdout);
  int n = 6;

  // Initialize memo
  for (int i = 0; i < 20; ++i) {
    memo[i] = -1; // -1 means not calculated yet
  }

  // Fibonacci sequence
  cout << "Fibonacci of " << n << " is: " << fibonacci(n) << endl;

  return 0;
}

// complexity O(n)..