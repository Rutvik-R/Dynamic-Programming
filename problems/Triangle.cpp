#include <bits/stdc++.h>
using namespace std;


int main() {
	int t , n ;
	cin >> t ;
	for (int z = 0; z < t; ++z)
	{
		cin >> n ;
		vector<vector<int>> triangle (n , vector<int> (n , -1)) ;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < i + 1 ; ++j)
			{
				cin >> triangle[i][j] ;
			}
		}
		vector<int> dp1 (n , -1) ;
		// vector<int> dp2 (n , -1) ;
		dp1[0] = triangle[0][0] ;
		int  upside , current ;

		for (int i = 1; i < n; ++i)
		{
			upside = dp1[0] ;
			dp1[0] = dp1[0] + triangle[i][0] ;

			for (int j = 1; j < i; ++j)
			{
				current = min(dp1[j] , upside) + triangle[i][j] ;
				upside = dp1[j] ;
				dp1[j] = current ;

			}

			dp1[i] = upside + triangle[i][i] ;
		}

		int ans = dp1[0];
		for (int i = 1; i < n ; ++i)
		{
			if (ans > dp1[i]) ans = dp1[i] ;
		}
		cout << ans << endl;

	}

}