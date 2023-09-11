// using recursion

#include <bits/stdc++.h>
using namespace std;

int minCoins(int coins[], int m, int V)
{

   if (V == 0)
      return 0;

   int ans = INT_MAX;

   for (int i = 0; i < m; i++)
   {
      if (coins[i] <= V)
      {
         int a = minCoins(coins, m, V - coins[i]);
         if (a != INT_MAX && a + 1 < ans)
            ans = a + 1;
      }
   }
   return ans;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0), cout.tie(0);
   int coins[] = {9, 6, 5, 1};
   int m = sizeof(coins) / sizeof(coins[0]);
   int V = 10;
   cout << "Minimum coins required is " << minCoins(coins, m, V);
}