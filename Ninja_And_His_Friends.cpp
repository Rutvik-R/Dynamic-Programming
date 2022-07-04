#include <bits/stdc++.h>
using namespace std;

int main() {
	int t , n , m;
	cin >> t ;
	for (int z = 0; z < t; ++z)
	{
		cin >> n >> m;
		vector<vector<int>> grid (n , vector<int> (n , -1)) ;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m ; ++j)
			{
				cin >> grid[i][j] ;
			}
		}
		vector<int> dp1(m , 0) ;
		vector<int> dp2(m , 0) ;
		for (int i = 0; i < m; ++i)
		{
			dp1[i] = grid[0][i] ;
		}
		int curr1 , side1 ;
		int curr2 , side2 ;

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
	}


}