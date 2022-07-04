#include <bits/stdc++.h>
using namespace std;


int main() {
	int t , n , m;
	cin >> t ;
	for (int z = 0; z < t; ++z)
	{
		cin >> n >> m;
		vector<vector<int>>	matrix (n , vector<int> (n , -1)) ;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m ; ++j)
			{
				cin >>	matrix[i][j] ;
			}
		}

		vector<int> dp(m , 0) ;
		for (int i = 0; i < m; ++i)
		{
			dp[i] = matrix[0][i] ;
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout << dp[i] << endl;
		// }

		int  upsideleft , current ;
		for (int i = 1; i < n; ++i)
		{
			upsideleft = dp[0] ;
			dp[0] = max(dp[0] , dp[1]) + matrix[i][0] ;
			// cout << i << " " << 0 << " " << dp[0] << endl;

			for (int j = 1 ; j < m - 1 ; ++j)
			{
				current = max(dp[j]  , max(dp[j + 1] , upsideleft)) + matrix[i][j] ;
				upsideleft = dp[j] ;
				dp[j] = current ;
				// cout << i << " " << j << " " << dp[j] << endl;
			}

			()dp[m - 1] = max(dp[m - 1] , upsideleft) + matrix[i][m - 1] ;
			// cout << i << " " << m - 1 << " " << dp[m - 1] << endl;
		}
		int ans = dp[0];
		for (int i = 1; i < m ; ++i)
		{
			if (ans < dp[i]) ans = dp[i] ;
		}
		cout << ans << endl;

	}
}