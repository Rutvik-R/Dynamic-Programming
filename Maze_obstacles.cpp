#include <bits/stdc++.h>
using namespace std ;

/*
int f(int n , int m , vector<vector<int>> & mat , vector<vector<int>> & dp )
{

	if (n == 0 && m == 0 ) return 1 ;
	if (dp[n][m] != -1) return dp[n][m] ;

	int down = 0;
	int right = 0;

	if (n != 0 && mat[n - 1][m] == 0) down = f(n - 1 , m , mat , dp);

	if (m != 0 && mat[n][m - 1] == 0) right = f(n , m - 1 , mat , dp) ;

	return dp[n][m] =  down + right ;
}




int main() {
	int t ;
	cin >> t;
	int n , m ;
	for (int i = 0; i < t; ++i)
	{
		cin >> n >> m;
		vector<vector<int>> mat(n , vector<int> (m , 1)) ;
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < m; ++k)
			{
				cin >> mat[j][k] ;
			}
		}
		vector<vector<int>> dp(n , vector<int> (m , -1) ) ;
		cout << f(n - 1 , m - 1 , mat , dp ) % (int)(1e9 + 7) << endl;

	}

}

*/

int main() {
	int t ;
	cin >> t;
	int n , m ;
	for (int i = 0; i < t; ++i)
	{
		cin >> n >> m;
		vector<vector<int>> mat(n , vector<int> (m , 1)) ;
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < m; ++k)
			{
				cin >> mat[j][k] ;
			}
		}
		vector<long long> dp(m, 0) ;
		for (int j = 0; j < m; ++j)
		{
			if (mat[0][j] == -1) break ;
			dp[j] = 1 ;
		}
		long long side ;
		for (int j = 0; j < m; ++j)
		{
			cout << dp[j] << " ";
		}
		for (int j = 1; j < n; ++j)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << dp[j] << " ";
			}
			cout << endl;

			side = 0 ;
			for (int k = 0; k < m; ++k)
			{
				if (mat[j][k] == -1) {
					dp[k] = 0 ;
					side = 0 ;
					continue ;
				}
				dp[k] = (dp[k] + side) % (int)(1e9 + 7) ;
				side = dp[k] ;
			}
		}
		cout << dp[m - 1] % (int)(1e9 + 7) << endl;
	}

}