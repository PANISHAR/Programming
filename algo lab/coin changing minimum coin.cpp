#include <bits/stdc++.h>
using namespace std;

int minCoinsUtil(int coins[], int m, int V, int *dp)
{

	if (V == 0)
		return 0;

	if (dp[V] != -1)
		return dp[V];

	int res = INT_MAX;

	for (int i = 0; i < m; i++)
	{
		if (coins[i] <= V)
		{

			int sub_res = minCoinsUtil(coins, m, V - coins[i], dp);

			if (sub_res != INT_MAX && sub_res + 1 < res)
				res = sub_res + 1;
		}
	}

	dp[V] = res;

	return res;
}

int minCoins(int coins[], int m, int V)
{

	int *dp = new int[V + 1];
	memset(dp, -1,
		   sizeof(int) * (V + 1));

	return minCoinsUtil(coins, m, V, dp);
}

int main()
{
	int coins[] = {9, 6, 5, 1};
	int m = sizeof(coins) / sizeof(coins[0]);
	int V = 11;

	int res = minCoins(coins, m, V);
	if (res == INT_MAX)
		res = -1;

	cout << "Minimum coins required is " << res;

	return 0;
}
