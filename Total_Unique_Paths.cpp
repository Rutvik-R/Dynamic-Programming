#include <bits/stdc++.h>
using namespace std ;

// normal
/*
int uniquePaths(int m, int n , vector<vector<int>> &dp ) {
	// cout << m << " " << n << " " << *ans << endl ;
	if (m == 1 && n == 1)	return 1 ;

	if (dp[m][n] != -1)	return dp[m][n] ;

	int side = 0 ;
	int up = 0 ;

	if (n != 1 ) side =  uniquePaths(m , n - 1, dp) ;

	if (m != 1 ) up =  uniquePaths(m - 1 , n, dp) ;
	return dp[m][n] = ( side + up );
}




// dp
int main() {
	int t , m, n ;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> m >> n ;
		vector<vector<int>> dp(m + 1 ,  vector<int>(n + 1 , -1 )) ;
		cout << uniquePaths( m, n , dp) << endl;
	}

}*/

// tabuler
/*
int main() {
	int t , m, n ;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> m >> n ;
		vector<vector<int>> dp(m + 1 ,  vector<int>(n + 1 , 0 )) ;
		dp[0][0] = 1 ;
		for (int j = 0; j < m; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				if (j != 0)	dp[j][k] = dp[j][k] + dp[j - 1][k] ;
				if (k != 0 ) dp[j][k] = dp[j][k] + dp[j][k - 1] ;
			}
		}
		cout << dp[m - 1][n - 1] << endl;
	}

}
*/




// tabuler with space optimization
/*
int main() {
	int t , m, n ;
	int  side , current ;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> m >> n ;
		vector<int> dp(n , 1) ;
		for (int j = 1; j < m; ++j)
		{
			side = 1 ;
			for (int k = 1; k < n; ++k)
			{
				current = side + dp[k] ;
				dp[k] = current ;
				side = current ;
			}

		}
		cout << dp[n - 1] << endl;
	}

}
*/

int main() {
	int t ;
	cin >> t;
	for (int j = 0 ; j < t ; j++) {
		int m, n ;
		cin >> m >> n ;
		int ans = 1;
		for	(int i = 1  ; i < min(m , n) ; i++) {
			ans = ans * (m + n - 2 - i + 1) ;
			ans = ans / i ;
			cout << m + n - 2 - i + 1 << " " << ans << endl;
		}

		cout << ans << endl;
	}
}