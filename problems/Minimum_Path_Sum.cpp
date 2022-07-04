#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	for (int k = 0; k < t; ++k)
	{
		int n , m ;
		cin >> n >> m ;
		vector<vector<int>> grid(n , vector<int> (m , 1)) ;
		for (int j = 0; j < n; ++j)
		{
			for (int i = 0; i < m; ++i)
			{
				cin >> grid[j][i] ;
			}
		}
		vector<int> dp(m ,  0) ;
		int  side ;
		dp[0] = grid[0][0] ;
		for (int i = 1; i < m; ++i)
		{
			dp[i] = dp[i - 1] + grid[0][i] ;
		}
		for (int i = 1 ; i < n ; i++) {
			dp[0] = dp[0] + grid[i][0] ;
			side = dp[0] ;
			for (int j = 1 ; j < m ; j++) {
				dp[j] = min(dp[j] , side) + grid[i][j] ;
				side = dp[j] ;
			}
		}
		cout << dp[m - 1] << endl;
	}
}